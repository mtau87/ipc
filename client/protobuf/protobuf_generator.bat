::protoc -I=./ --cpp_out=./generated ./asset_building_material.proto

@echo off

echo %1
echo %2

set SOURCE_FOLDER=%1

set CPP_COMPILER_PATH=%1\protoc.exe
set CPP_TARGET_PATH=%2

set  PROTO_STR= 
echo %PROTO_STR%
setlocal ENABLEDELAYEDEXPANSION
for /f "delims=" %%i in ('dir /b "%SOURCE_FOLDER%\*.proto"') do (
    set  PROTO_STR=!PROTO_STR! %SOURCE_FOLDER%%%i
)
echo %PROTO_STR%

@echo on
%CPP_COMPILER_PATH% -I=%SOURCE_FOLDER% --cpp_out=%CPP_TARGET_PATH%  %PROTO_STR%
::md %CPP_TARGET_PATH%js
%CPP_COMPILER_PATH% -I=%SOURCE_FOLDER% --js_out=import_style=commonjs,binary:%CPP_TARGET_PATH%js  %PROTO_STR%
::cd %SOURCE_FOLDER%
::browserify exports.js > bundle.js
::uglifyjs bundle.js -c -m -o %SOURCE_FOLDER%..\..\..\view\bundle-min.js

echo done