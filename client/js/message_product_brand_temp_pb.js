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

var db2_pb = require('./db2_pb.js');
goog.exportSymbol('proto.d5.db2.CMessageAddProductBrandTempRequest', null, global);
goog.exportSymbol('proto.d5.db2.CMessageAddProductBrandTempResponse', null, global);
goog.exportSymbol('proto.d5.db2.CMessageProductBrandTempRequest', null, global);
goog.exportSymbol('proto.d5.db2.CMessageProductBrandTempResponse', null, global);

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
proto.d5.db2.CMessageProductBrandTempRequest = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.d5.db2.CMessageProductBrandTempRequest, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.db2.CMessageProductBrandTempRequest.displayName = 'proto.d5.db2.CMessageProductBrandTempRequest';
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
proto.d5.db2.CMessageProductBrandTempRequest.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.db2.CMessageProductBrandTempRequest.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.db2.CMessageProductBrandTempRequest} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.db2.CMessageProductBrandTempRequest.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    uuid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    productid: jspb.Message.getFieldWithDefault(msg, 3, "")
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
 * @return {!proto.d5.db2.CMessageProductBrandTempRequest}
 */
proto.d5.db2.CMessageProductBrandTempRequest.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.db2.CMessageProductBrandTempRequest;
  return proto.d5.db2.CMessageProductBrandTempRequest.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.db2.CMessageProductBrandTempRequest} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.db2.CMessageProductBrandTempRequest}
 */
proto.d5.db2.CMessageProductBrandTempRequest.deserializeBinaryFromReader = function(msg, reader) {
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
      var value = /** @type {string} */ (reader.readString());
      msg.setProductid(value);
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
proto.d5.db2.CMessageProductBrandTempRequest.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.db2.CMessageProductBrandTempRequest.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.db2.CMessageProductBrandTempRequest} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.db2.CMessageProductBrandTempRequest.serializeBinaryToWriter = function(message, writer) {
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
  f = message.getProductid();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
};


/**
 * optional int32 type = 1;
 * @return {number}
 */
proto.d5.db2.CMessageProductBrandTempRequest.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.db2.CMessageProductBrandTempRequest.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string uuid = 2;
 * @return {string}
 */
proto.d5.db2.CMessageProductBrandTempRequest.prototype.getUuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.db2.CMessageProductBrandTempRequest.prototype.setUuid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional string productId = 3;
 * @return {string}
 */
proto.d5.db2.CMessageProductBrandTempRequest.prototype.getProductid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/** @param {string} value */
proto.d5.db2.CMessageProductBrandTempRequest.prototype.setProductid = function(value) {
  jspb.Message.setProto3StringField(this, 3, value);
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
proto.d5.db2.CMessageProductBrandTempResponse = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.d5.db2.CMessageProductBrandTempResponse, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.db2.CMessageProductBrandTempResponse.displayName = 'proto.d5.db2.CMessageProductBrandTempResponse';
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
proto.d5.db2.CMessageProductBrandTempResponse.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.db2.CMessageProductBrandTempResponse.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.db2.CMessageProductBrandTempResponse} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.db2.CMessageProductBrandTempResponse.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    uuid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    state: jspb.Message.getFieldWithDefault(msg, 3, 0),
    data: (f = msg.getData()) && db2_pb.product_brand_temp.toObject(includeInstance, f)
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
 * @return {!proto.d5.db2.CMessageProductBrandTempResponse}
 */
proto.d5.db2.CMessageProductBrandTempResponse.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.db2.CMessageProductBrandTempResponse;
  return proto.d5.db2.CMessageProductBrandTempResponse.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.db2.CMessageProductBrandTempResponse} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.db2.CMessageProductBrandTempResponse}
 */
proto.d5.db2.CMessageProductBrandTempResponse.deserializeBinaryFromReader = function(msg, reader) {
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
      var value = new db2_pb.product_brand_temp;
      reader.readMessage(value,db2_pb.product_brand_temp.deserializeBinaryFromReader);
      msg.setData(value);
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
proto.d5.db2.CMessageProductBrandTempResponse.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.db2.CMessageProductBrandTempResponse.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.db2.CMessageProductBrandTempResponse} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.db2.CMessageProductBrandTempResponse.serializeBinaryToWriter = function(message, writer) {
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
  f = message.getData();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      db2_pb.product_brand_temp.serializeBinaryToWriter
    );
  }
};


/**
 * optional int32 type = 1;
 * @return {number}
 */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string uuid = 2;
 * @return {string}
 */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.getUuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.setUuid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional int32 state = 3;
 * @return {number}
 */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.getState = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.setState = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};


/**
 * optional product_brand_temp data = 4;
 * @return {?proto.d5.db2.product_brand_temp}
 */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.getData = function() {
  return /** @type{?proto.d5.db2.product_brand_temp} */ (
    jspb.Message.getWrapperField(this, db2_pb.product_brand_temp, 4));
};


/** @param {?proto.d5.db2.product_brand_temp|undefined} value */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.setData = function(value) {
  jspb.Message.setWrapperField(this, 4, value);
};


proto.d5.db2.CMessageProductBrandTempResponse.prototype.clearData = function() {
  this.setData(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.d5.db2.CMessageProductBrandTempResponse.prototype.hasData = function() {
  return jspb.Message.getField(this, 4) != null;
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
proto.d5.db2.CMessageAddProductBrandTempRequest = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.d5.db2.CMessageAddProductBrandTempRequest, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.db2.CMessageAddProductBrandTempRequest.displayName = 'proto.d5.db2.CMessageAddProductBrandTempRequest';
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
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.db2.CMessageAddProductBrandTempRequest.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.db2.CMessageAddProductBrandTempRequest} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.db2.CMessageAddProductBrandTempRequest.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    uuid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    data: (f = msg.getData()) && db2_pb.product_brand_temp.toObject(includeInstance, f)
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
 * @return {!proto.d5.db2.CMessageAddProductBrandTempRequest}
 */
proto.d5.db2.CMessageAddProductBrandTempRequest.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.db2.CMessageAddProductBrandTempRequest;
  return proto.d5.db2.CMessageAddProductBrandTempRequest.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.db2.CMessageAddProductBrandTempRequest} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.db2.CMessageAddProductBrandTempRequest}
 */
proto.d5.db2.CMessageAddProductBrandTempRequest.deserializeBinaryFromReader = function(msg, reader) {
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
      var value = new db2_pb.product_brand_temp;
      reader.readMessage(value,db2_pb.product_brand_temp.deserializeBinaryFromReader);
      msg.setData(value);
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
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.db2.CMessageAddProductBrandTempRequest.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.db2.CMessageAddProductBrandTempRequest} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.db2.CMessageAddProductBrandTempRequest.serializeBinaryToWriter = function(message, writer) {
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
  f = message.getData();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      db2_pb.product_brand_temp.serializeBinaryToWriter
    );
  }
};


/**
 * optional int32 type = 1;
 * @return {number}
 */
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string uuid = 2;
 * @return {string}
 */
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.getUuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.setUuid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional product_brand_temp data = 3;
 * @return {?proto.d5.db2.product_brand_temp}
 */
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.getData = function() {
  return /** @type{?proto.d5.db2.product_brand_temp} */ (
    jspb.Message.getWrapperField(this, db2_pb.product_brand_temp, 3));
};


/** @param {?proto.d5.db2.product_brand_temp|undefined} value */
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.setData = function(value) {
  jspb.Message.setWrapperField(this, 3, value);
};


proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.clearData = function() {
  this.setData(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.d5.db2.CMessageAddProductBrandTempRequest.prototype.hasData = function() {
  return jspb.Message.getField(this, 3) != null;
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
proto.d5.db2.CMessageAddProductBrandTempResponse = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.d5.db2.CMessageAddProductBrandTempResponse, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.d5.db2.CMessageAddProductBrandTempResponse.displayName = 'proto.d5.db2.CMessageAddProductBrandTempResponse';
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
proto.d5.db2.CMessageAddProductBrandTempResponse.prototype.toObject = function(opt_includeInstance) {
  return proto.d5.db2.CMessageAddProductBrandTempResponse.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.d5.db2.CMessageAddProductBrandTempResponse} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.db2.CMessageAddProductBrandTempResponse.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    uuid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    state: jspb.Message.getFieldWithDefault(msg, 3, 0)
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
 * @return {!proto.d5.db2.CMessageAddProductBrandTempResponse}
 */
proto.d5.db2.CMessageAddProductBrandTempResponse.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.d5.db2.CMessageAddProductBrandTempResponse;
  return proto.d5.db2.CMessageAddProductBrandTempResponse.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.d5.db2.CMessageAddProductBrandTempResponse} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.d5.db2.CMessageAddProductBrandTempResponse}
 */
proto.d5.db2.CMessageAddProductBrandTempResponse.deserializeBinaryFromReader = function(msg, reader) {
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
proto.d5.db2.CMessageAddProductBrandTempResponse.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.d5.db2.CMessageAddProductBrandTempResponse.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.d5.db2.CMessageAddProductBrandTempResponse} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.d5.db2.CMessageAddProductBrandTempResponse.serializeBinaryToWriter = function(message, writer) {
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
};


/**
 * optional int32 type = 1;
 * @return {number}
 */
proto.d5.db2.CMessageAddProductBrandTempResponse.prototype.getType = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.d5.db2.CMessageAddProductBrandTempResponse.prototype.setType = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional string uuid = 2;
 * @return {string}
 */
proto.d5.db2.CMessageAddProductBrandTempResponse.prototype.getUuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.d5.db2.CMessageAddProductBrandTempResponse.prototype.setUuid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional int32 state = 3;
 * @return {number}
 */
proto.d5.db2.CMessageAddProductBrandTempResponse.prototype.getState = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.d5.db2.CMessageAddProductBrandTempResponse.prototype.setState = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};


goog.object.extend(exports, proto.d5.db2);
