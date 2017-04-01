
(cl:in-package :asdf)

(defsystem "rocon_std_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :uuid_msgs-msg
)
  :components ((:file "_package")
    (:file "KeyValue" :depends-on ("_package_KeyValue"))
    (:file "_package_KeyValue" :depends-on ("_package"))
    (:file "Icon" :depends-on ("_package_Icon"))
    (:file "_package_Icon" :depends-on ("_package"))
    (:file "Connection" :depends-on ("_package_Connection"))
    (:file "_package_Connection" :depends-on ("_package"))
    (:file "MasterInfo" :depends-on ("_package_MasterInfo"))
    (:file "_package_MasterInfo" :depends-on ("_package"))
    (:file "Strings" :depends-on ("_package_Strings"))
    (:file "_package_Strings" :depends-on ("_package"))
    (:file "PlatformInfo" :depends-on ("_package_PlatformInfo"))
    (:file "_package_PlatformInfo" :depends-on ("_package"))
    (:file "StringArray" :depends-on ("_package_StringArray"))
    (:file "_package_StringArray" :depends-on ("_package"))
    (:file "Remapping" :depends-on ("_package_Remapping"))
    (:file "_package_Remapping" :depends-on ("_package"))
    (:file "StringsPair" :depends-on ("_package_StringsPair"))
    (:file "_package_StringsPair" :depends-on ("_package"))
    (:file "StringsResponse" :depends-on ("_package_StringsResponse"))
    (:file "_package_StringsResponse" :depends-on ("_package"))
    (:file "StringsPairResponse" :depends-on ("_package_StringsPairResponse"))
    (:file "_package_StringsPairResponse" :depends-on ("_package"))
    (:file "StringsPairRequest" :depends-on ("_package_StringsPairRequest"))
    (:file "_package_StringsPairRequest" :depends-on ("_package"))
    (:file "StringsRequest" :depends-on ("_package_StringsRequest"))
    (:file "_package_StringsRequest" :depends-on ("_package"))
  ))