; Auto-generated. Do not edit!


(cl:in-package rocon_std_msgs-msg)


;//! \htmlinclude StringsPairRequest.msg.html

(cl:defclass <StringsPairRequest> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type uuid_msgs-msg:UniqueID
    :initform (cl:make-instance 'uuid_msgs-msg:UniqueID))
   (request
    :reader request
    :initarg :request
    :type rocon_std_msgs-msg:StringsRequest
    :initform (cl:make-instance 'rocon_std_msgs-msg:StringsRequest)))
)

(cl:defclass StringsPairRequest (<StringsPairRequest>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StringsPairRequest>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StringsPairRequest)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rocon_std_msgs-msg:<StringsPairRequest> is deprecated: use rocon_std_msgs-msg:StringsPairRequest instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <StringsPairRequest>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rocon_std_msgs-msg:id-val is deprecated.  Use rocon_std_msgs-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'request-val :lambda-list '(m))
(cl:defmethod request-val ((m <StringsPairRequest>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rocon_std_msgs-msg:request-val is deprecated.  Use rocon_std_msgs-msg:request instead.")
  (request m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StringsPairRequest>) ostream)
  "Serializes a message object of type '<StringsPairRequest>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'request) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StringsPairRequest>) istream)
  "Deserializes a message object of type '<StringsPairRequest>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'request) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StringsPairRequest>)))
  "Returns string type for a message object of type '<StringsPairRequest>"
  "rocon_std_msgs/StringsPairRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StringsPairRequest)))
  "Returns string type for a message object of type 'StringsPairRequest"
  "rocon_std_msgs/StringsPairRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StringsPairRequest>)))
  "Returns md5sum for a message object of type '<StringsPairRequest>"
  "71ec95e384ce52aa32491f3b69a62027")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StringsPairRequest)))
  "Returns md5sum for a message object of type 'StringsPairRequest"
  "71ec95e384ce52aa32491f3b69a62027")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StringsPairRequest>)))
  "Returns full string definition for message of type '<StringsPairRequest>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM A SERVICE PAIR DEFINITION ======~%~%uuid_msgs/UniqueID id~%StringsRequest request~%~%================================================================================~%MSG: uuid_msgs/UniqueID~%# A universally unique identifier (UUID).~%#~%#  http://en.wikipedia.org/wiki/Universally_unique_identifier~%#  http://tools.ietf.org/html/rfc4122.html~%~%uint8[16] uuid~%~%================================================================================~%MSG: rocon_std_msgs/StringsRequest~%# ====== DO NOT MODIFY! AUTOGENERATED FROM A SERVICE PAIR DEFINITION ======~%~%string data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StringsPairRequest)))
  "Returns full string definition for message of type 'StringsPairRequest"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM A SERVICE PAIR DEFINITION ======~%~%uuid_msgs/UniqueID id~%StringsRequest request~%~%================================================================================~%MSG: uuid_msgs/UniqueID~%# A universally unique identifier (UUID).~%#~%#  http://en.wikipedia.org/wiki/Universally_unique_identifier~%#  http://tools.ietf.org/html/rfc4122.html~%~%uint8[16] uuid~%~%================================================================================~%MSG: rocon_std_msgs/StringsRequest~%# ====== DO NOT MODIFY! AUTOGENERATED FROM A SERVICE PAIR DEFINITION ======~%~%string data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StringsPairRequest>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'request))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StringsPairRequest>))
  "Converts a ROS message object to a list"
  (cl:list 'StringsPairRequest
    (cl:cons ':id (id msg))
    (cl:cons ':request (request msg))
))
