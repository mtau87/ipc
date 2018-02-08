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

goog.exportSymbol('proto.d5.CMessageChannelListRequest', null, global);
goog.exportSymbol('proto.d5.CMessageChannelListResponse', null, global);
goog.exportSymbol('proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit', null, global);

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
proto.d5.CMessageChannelListRequest = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.d5.CMessageChannelListRequest, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.CMessageChannelListRequest.displayName = 'proto.d5.CMessageChannelListRequest';
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
proto.d5.CMessageChannelListRequest.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.CMessageChannelListRequest.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.CMessageChannelListRequest} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageChannelListRequest.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    uuid: jspb.Message.getFieldWithDefault(msg, 2, "")
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
 * @return {!proto.d5.CMessageChannelListRequest}
 */
proto.d5.CMessageChannelListRequest.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.CMessageChannelListRequest;
  return proto.d5.CMessageChannelListRequest.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.CMessageChannelListRequest} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.CMessageChannelListRequest}
 */
proto.d5.CMessageChannelListRequest.deserializeBinaryFromReader = function(msg, reader) {
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
proto.d5.CMessageChannelListRequest.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.CMessageChannelListRequest.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.CMessageChannelListRequest} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageChannelListRequest.serializeBinaryToWriter = function(message, writer) {
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
};


/**
 * optional int32 type = 1;
 * @return {number}
 */
proto.d5.CMessageChannelListRequest.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.CMessageChannelListRequest.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string uuid = 2;
 * @return {string}
 */
proto.d5.CMessageChannelListRequest.prototype.getUuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.CMessageChannelListRequest.prototype.setUuid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
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
proto.d5.CMessageChannelListResponse = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.d5.CMessageChannelListResponse.repeatedFields_, null);
};
goog.inherits(proto.d5.CMessageChannelListResponse, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.CMessageChannelListResponse.displayName = 'proto.d5.CMessageChannelListResponse';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.d5.CMessageChannelListResponse.repeatedFields_ = [4];



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
proto.d5.CMessageChannelListResponse.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.CMessageChannelListResponse.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.CMessageChannelListResponse} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageChannelListResponse.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    uuid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    state: jspb.Message.getFieldWithDefault(msg, 3, 0),
    listList: jspb.Message.toObjectList(msg.getListList(),
    proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.toObject, includeInstance)
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
 * @return {!proto.d5.CMessageChannelListResponse}
 */
proto.d5.CMessageChannelListResponse.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.CMessageChannelListResponse;
  return proto.d5.CMessageChannelListResponse.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.CMessageChannelListResponse} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.CMessageChannelListResponse}
 */
proto.d5.CMessageChannelListResponse.deserializeBinaryFromReader = function(msg, reader) {
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
      var value = new proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit;
      reader.readMessage(value,proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.deserializeBinaryFromReader);
      msg.addList(value);
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
proto.d5.CMessageChannelListResponse.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.CMessageChannelListResponse.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.CMessageChannelListResponse} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageChannelListResponse.serializeBinaryToWriter = function(message, writer) {
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
  f = message.getListList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      4,
      f,
      proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.serializeBinaryToWriter
    );
  }
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
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.displayName = 'proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit';
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
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.toObject = function(includeInstance, msg) {
  var f, obj = {
    companyid: jspb.Message.getFieldWithDefault(msg, 1, 0),
    companyname: jspb.Message.getFieldWithDefault(msg, 2, "")
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
 * @return {!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit}
 */
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit;
  return proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit}
 */
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setCompanyid(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setCompanyname(value);
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
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getCompanyid();
  if (f !== 0) {
    writer.writeInt32(
      1,
      f
    );
  }
  f = message.getCompanyname();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
};


/**
 * optional int32 companyId = 1;
 * @return {number}
 */
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.prototype.getCompanyid = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.prototype.setCompanyid = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string companyName = 2;
 * @return {string}
 */
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.prototype.getCompanyname = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit.prototype.setCompanyname = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional int32 type = 1;
 * @return {number}
 */
proto.d5.CMessageChannelListResponse.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.CMessageChannelListResponse.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string uuid = 2;
 * @return {string}
 */
proto.d5.CMessageChannelListResponse.prototype.getUuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.CMessageChannelListResponse.prototype.setUuid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional int32 state = 3;
 * @return {number}
 */
proto.d5.CMessageChannelListResponse.prototype.getState = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.d5.CMessageChannelListResponse.prototype.setState = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};


/**
 * repeated CMessageHttpChannelUnit list = 4;
 * @return {!Array<!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit>}
 */
proto.d5.CMessageChannelListResponse.prototype.getListList = function() {
  return /** @type{!Array<!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit, 4));
};


/** @param {!Array<!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit>} value */
proto.d5.CMessageChannelListResponse.prototype.setListList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 4, value);
};


/**
 * @param {!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit=} opt_value
 * @param {number=} opt_index
 * @return {!proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit}
 */
proto.d5.CMessageChannelListResponse.prototype.addList = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 4, opt_value, proto.d5.CMessageChannelListResponse.CMessageHttpChannelUnit, opt_index);
};


proto.d5.CMessageChannelListResponse.prototype.clearListList = function() {
  this.setListList([]);
};


goog.object.extend(exports, proto.d5);