/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

goog.exportSymbol('proto.d5.CMessageCategoryListRequest', null, global);
goog.exportSymbol('proto.d5.CMessageCategoryListResponse', null, global);
goog.exportSymbol('proto.d5.CMessageCategoryUnit', null, global);

/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.d5.CMessageCategoryListRequest = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.d5.CMessageCategoryListRequest, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.CMessageCategoryListRequest.displayName = 'proto.d5.CMessageCategoryListRequest';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.d5.CMessageCategoryListRequest.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.CMessageCategoryListRequest.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.CMessageCategoryListRequest} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageCategoryListRequest.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    uuid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    iscustomcategory: jspb.Message.getFieldWithDefault(msg, 3, false)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.d5.CMessageCategoryListRequest}
 */
proto.d5.CMessageCategoryListRequest.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.CMessageCategoryListRequest;
  return proto.d5.CMessageCategoryListRequest.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.CMessageCategoryListRequest} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.CMessageCategoryListRequest}
 */
proto.d5.CMessageCategoryListRequest.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setType(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setUuid(value);
      break;
    case 3:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setIscustomcategory(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.d5.CMessageCategoryListRequest.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.CMessageCategoryListRequest.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.CMessageCategoryListRequest} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageCategoryListRequest.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getType();
  if (f !== 0) {
    writer.writeInt32(
      1,
      f
    );
  }
  f = message.getUuid();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getIscustomcategory();
  if (f) {
    writer.writeBool(
      3,
      f
    );
  }
};


/**
 * optional int32 type = 1;
 * @return {number}
 */
proto.d5.CMessageCategoryListRequest.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.CMessageCategoryListRequest.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string uuid = 2;
 * @return {string}
 */
proto.d5.CMessageCategoryListRequest.prototype.getUuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.CMessageCategoryListRequest.prototype.setUuid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional bool isCustomCategory = 3;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.d5.CMessageCategoryListRequest.prototype.getIscustomcategory = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 3, false));
};


/** @param {boolean} value */
proto.d5.CMessageCategoryListRequest.prototype.setIscustomcategory = function(value) {
  jspb.Message.setProto3BooleanField(this, 3, value);
};



/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.d5.CMessageCategoryUnit = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.d5.CMessageCategoryUnit.repeatedFields_, null);
};
goog.inherits(proto.d5.CMessageCategoryUnit, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.CMessageCategoryUnit.displayName = 'proto.d5.CMessageCategoryUnit';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.d5.CMessageCategoryUnit.repeatedFields_ = [6];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.d5.CMessageCategoryUnit.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.CMessageCategoryUnit.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.CMessageCategoryUnit} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageCategoryUnit.toObject = function(includeInstance, msg) {
  var f, obj = {
    id: jspb.Message.getFieldWithDefault(msg, 1, 0),
    title: jspb.Message.getFieldWithDefault(msg, 2, ""),
    companyid: jspb.Message.getFieldWithDefault(msg, 3, 0),
    parentid: jspb.Message.getFieldWithDefault(msg, 4, 0),
    level: jspb.Message.getFieldWithDefault(msg, 5, 0),
    childrenList: jspb.Message.toObjectList(msg.getChildrenList(),
    proto.d5.CMessageCategoryUnit.toObject, includeInstance)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.d5.CMessageCategoryUnit}
 */
proto.d5.CMessageCategoryUnit.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.CMessageCategoryUnit;
  return proto.d5.CMessageCategoryUnit.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.CMessageCategoryUnit} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.CMessageCategoryUnit}
 */
proto.d5.CMessageCategoryUnit.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setId(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setTitle(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setCompanyid(value);
      break;
    case 4:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setParentid(value);
      break;
    case 5:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setLevel(value);
      break;
    case 6:
      var value = new proto.d5.CMessageCategoryUnit;
      reader.readMessage(value,proto.d5.CMessageCategoryUnit.deserializeBinaryFromReader);
      msg.addChildren(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.d5.CMessageCategoryUnit.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.CMessageCategoryUnit.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.CMessageCategoryUnit} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageCategoryUnit.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getId();
  if (f !== 0) {
    writer.writeInt32(
      1,
      f
    );
  }
  f = message.getTitle();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getCompanyid();
  if (f !== 0) {
    writer.writeInt32(
      3,
      f
    );
  }
  f = message.getParentid();
  if (f !== 0) {
    writer.writeInt32(
      4,
      f
    );
  }
  f = message.getLevel();
  if (f !== 0) {
    writer.writeInt32(
      5,
      f
    );
  }
  f = message.getChildrenList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      6,
      f,
      proto.d5.CMessageCategoryUnit.serializeBinaryToWriter
    );
  }
};


/**
 * optional int32 id = 1;
 * @return {number}
 */
proto.d5.CMessageCategoryUnit.prototype.getId = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.CMessageCategoryUnit.prototype.setId = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string title = 2;
 * @return {string}
 */
proto.d5.CMessageCategoryUnit.prototype.getTitle = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.CMessageCategoryUnit.prototype.setTitle = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional int32 companyId = 3;
 * @return {number}
 */
proto.d5.CMessageCategoryUnit.prototype.getCompanyid = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.d5.CMessageCategoryUnit.prototype.setCompanyid = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};


/**
 * optional int32 parentId = 4;
 * @return {number}
 */
proto.d5.CMessageCategoryUnit.prototype.getParentid = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 4, 0));
};


/** @param {number} value */
proto.d5.CMessageCategoryUnit.prototype.setParentid = function(value) {
  jspb.Message.setProto3IntField(this, 4, value);
};


/**
 * optional int32 level = 5;
 * @return {number}
 */
proto.d5.CMessageCategoryUnit.prototype.getLevel = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 5, 0));
};


/** @param {number} value */
proto.d5.CMessageCategoryUnit.prototype.setLevel = function(value) {
  jspb.Message.setProto3IntField(this, 5, value);
};


/**
 * repeated CMessageCategoryUnit children = 6;
 * @return {!Array<!proto.d5.CMessageCategoryUnit>}
 */
proto.d5.CMessageCategoryUnit.prototype.getChildrenList = function() {
  return /** @type{!Array<!proto.d5.CMessageCategoryUnit>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.d5.CMessageCategoryUnit, 6));
};


/** @param {!Array<!proto.d5.CMessageCategoryUnit>} value */
proto.d5.CMessageCategoryUnit.prototype.setChildrenList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 6, value);
};


/**
 * @param {!proto.d5.CMessageCategoryUnit=} opt_value
 * @param {number=} opt_index
 * @return {!proto.d5.CMessageCategoryUnit}
 */
proto.d5.CMessageCategoryUnit.prototype.addChildren = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 6, opt_value, proto.d5.CMessageCategoryUnit, opt_index);
};


proto.d5.CMessageCategoryUnit.prototype.clearChildrenList = function() {
  this.setChildrenList([]);
};



/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.d5.CMessageCategoryListResponse = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.d5.CMessageCategoryListResponse.repeatedFields_, null);
};
goog.inherits(proto.d5.CMessageCategoryListResponse, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.CMessageCategoryListResponse.displayName = 'proto.d5.CMessageCategoryListResponse';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.d5.CMessageCategoryListResponse.repeatedFields_ = [4];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.d5.CMessageCategoryListResponse.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.CMessageCategoryListResponse.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.CMessageCategoryListResponse} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageCategoryListResponse.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    uuid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    state: jspb.Message.getFieldWithDefault(msg, 3, 0),
    rootList: jspb.Message.toObjectList(msg.getRootList(),
    proto.d5.CMessageCategoryUnit.toObject, includeInstance)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.d5.CMessageCategoryListResponse}
 */
proto.d5.CMessageCategoryListResponse.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.CMessageCategoryListResponse;
  return proto.d5.CMessageCategoryListResponse.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.CMessageCategoryListResponse} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.CMessageCategoryListResponse}
 */
proto.d5.CMessageCategoryListResponse.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setType(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setUuid(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setState(value);
      break;
    case 4:
      var value = new proto.d5.CMessageCategoryUnit;
      reader.readMessage(value,proto.d5.CMessageCategoryUnit.deserializeBinaryFromReader);
      msg.addRoot(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.d5.CMessageCategoryListResponse.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.CMessageCategoryListResponse.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.CMessageCategoryListResponse} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageCategoryListResponse.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getType();
  if (f !== 0) {
    writer.writeInt32(
      1,
      f
    );
  }
  f = message.getUuid();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getState();
  if (f !== 0) {
    writer.writeInt32(
      3,
      f
    );
  }
  f = message.getRootList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      4,
      f,
      proto.d5.CMessageCategoryUnit.serializeBinaryToWriter
    );
  }
};


/**
 * optional int32 type = 1;
 * @return {number}
 */
proto.d5.CMessageCategoryListResponse.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.CMessageCategoryListResponse.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string uuid = 2;
 * @return {string}
 */
proto.d5.CMessageCategoryListResponse.prototype.getUuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.CMessageCategoryListResponse.prototype.setUuid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional int32 state = 3;
 * @return {number}
 */
proto.d5.CMessageCategoryListResponse.prototype.getState = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.d5.CMessageCategoryListResponse.prototype.setState = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};


/**
 * repeated CMessageCategoryUnit root = 4;
 * @return {!Array<!proto.d5.CMessageCategoryUnit>}
 */
proto.d5.CMessageCategoryListResponse.prototype.getRootList = function() {
  return /** @type{!Array<!proto.d5.CMessageCategoryUnit>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.d5.CMessageCategoryUnit, 4));
};


/** @param {!Array<!proto.d5.CMessageCategoryUnit>} value */
proto.d5.CMessageCategoryListResponse.prototype.setRootList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 4, value);
};


/**
 * @param {!proto.d5.CMessageCategoryUnit=} opt_value
 * @param {number=} opt_index
 * @return {!proto.d5.CMessageCategoryUnit}
 */
proto.d5.CMessageCategoryListResponse.prototype.addRoot = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 4, opt_value, proto.d5.CMessageCategoryUnit, opt_index);
};


proto.d5.CMessageCategoryListResponse.prototype.clearRootList = function() {
  this.setRootList([]);
};


goog.object.extend(exports, proto.d5);
