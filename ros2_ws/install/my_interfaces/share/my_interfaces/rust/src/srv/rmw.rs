#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__AddThreeInts_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__AddThreeInts_Request__init(msg: *mut AddThreeInts_Request) -> bool;
    fn my_interfaces__srv__AddThreeInts_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Request>, size: usize) -> bool;
    fn my_interfaces__srv__AddThreeInts_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Request>);
    fn my_interfaces__srv__AddThreeInts_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddThreeInts_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Request>) -> bool;
}

// Corresponds to my_interfaces__srv__AddThreeInts_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddThreeInts_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub c: i64,

}



impl Default for AddThreeInts_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__AddThreeInts_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__AddThreeInts_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddThreeInts_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddThreeInts_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddThreeInts_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/AddThreeInts_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__AddThreeInts_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__AddThreeInts_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__AddThreeInts_Response__init(msg: *mut AddThreeInts_Response) -> bool;
    fn my_interfaces__srv__AddThreeInts_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Response>, size: usize) -> bool;
    fn my_interfaces__srv__AddThreeInts_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Response>);
    fn my_interfaces__srv__AddThreeInts_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AddThreeInts_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AddThreeInts_Response>) -> bool;
}

// Corresponds to my_interfaces__srv__AddThreeInts_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AddThreeInts_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i64,

}



impl Default for AddThreeInts_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__AddThreeInts_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__AddThreeInts_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AddThreeInts_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__AddThreeInts_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AddThreeInts_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AddThreeInts_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/AddThreeInts_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__AddThreeInts_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetTurtleName_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__SetTurtleName_Request__init(msg: *mut SetTurtleName_Request) -> bool;
    fn my_interfaces__srv__SetTurtleName_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Request>, size: usize) -> bool;
    fn my_interfaces__srv__SetTurtleName_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Request>);
    fn my_interfaces__srv__SetTurtleName_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTurtleName_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Request>) -> bool;
}

// Corresponds to my_interfaces__srv__SetTurtleName_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTurtleName_Request {
    /// 새로 붙일 이름
    pub new_name: rosidl_runtime_rs::String,

}



impl Default for SetTurtleName_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__SetTurtleName_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__SetTurtleName_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTurtleName_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTurtleName_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTurtleName_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/SetTurtleName_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetTurtleName_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetTurtleName_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__SetTurtleName_Response__init(msg: *mut SetTurtleName_Response) -> bool;
    fn my_interfaces__srv__SetTurtleName_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Response>, size: usize) -> bool;
    fn my_interfaces__srv__SetTurtleName_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Response>);
    fn my_interfaces__srv__SetTurtleName_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTurtleName_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTurtleName_Response>) -> bool;
}

// Corresponds to my_interfaces__srv__SetTurtleName_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTurtleName_Response {
    /// 응답 : 성공 여부
    pub success: bool,

    /// 응답 : 사람이 읽을 안내문
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetTurtleName_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__SetTurtleName_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__SetTurtleName_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTurtleName_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetTurtleName_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTurtleName_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTurtleName_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/SetTurtleName_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetTurtleName_Response() }
  }
}






#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__AddThreeInts() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__AddThreeInts
#[allow(missing_docs, non_camel_case_types)]
pub struct AddThreeInts;

impl rosidl_runtime_rs::Service for AddThreeInts {
    type Request = AddThreeInts_Request;
    type Response = AddThreeInts_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__AddThreeInts() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__SetTurtleName() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__SetTurtleName
#[allow(missing_docs, non_camel_case_types)]
pub struct SetTurtleName;

impl rosidl_runtime_rs::Service for SetTurtleName {
    type Request = SetTurtleName_Request;
    type Response = SetTurtleName_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__SetTurtleName() }
    }
}


