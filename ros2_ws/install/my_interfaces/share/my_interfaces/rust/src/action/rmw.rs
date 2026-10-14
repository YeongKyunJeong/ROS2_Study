
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_Goal() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__CountUp_Goal__init(msg: *mut CountUp_Goal) -> bool;
    fn my_interfaces__action__CountUp_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CountUp_Goal>, size: usize) -> bool;
    fn my_interfaces__action__CountUp_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CountUp_Goal>);
    fn my_interfaces__action__CountUp_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CountUp_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<CountUp_Goal>) -> bool;
}

// Corresponds to my_interfaces__action__CountUp_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_Goal {
    /// Goal
    /// 목표 수
    pub target: i32,

}



impl Default for CountUp_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__CountUp_Goal__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__CountUp_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CountUp_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CountUp_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CountUp_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/CountUp_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_Goal() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_Result() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__CountUp_Result__init(msg: *mut CountUp_Result) -> bool;
    fn my_interfaces__action__CountUp_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CountUp_Result>, size: usize) -> bool;
    fn my_interfaces__action__CountUp_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CountUp_Result>);
    fn my_interfaces__action__CountUp_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CountUp_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<CountUp_Result>) -> bool;
}

// Corresponds to my_interfaces__action__CountUp_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_Result {
    /// 지금까지 센 수
    pub sequence: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for CountUp_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__CountUp_Result__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__CountUp_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CountUp_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CountUp_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CountUp_Result where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/CountUp_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_Result() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__CountUp_Feedback__init(msg: *mut CountUp_Feedback) -> bool;
    fn my_interfaces__action__CountUp_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CountUp_Feedback>, size: usize) -> bool;
    fn my_interfaces__action__CountUp_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CountUp_Feedback>);
    fn my_interfaces__action__CountUp_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CountUp_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<CountUp_Feedback>) -> bool;
}

// Corresponds to my_interfaces__action__CountUp_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_Feedback {
    /// 현재 센 수
    pub current: i32,

}



impl Default for CountUp_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__CountUp_Feedback__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__CountUp_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CountUp_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CountUp_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CountUp_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/CountUp_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_Feedback() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__CountUp_FeedbackMessage__init(msg: *mut CountUp_FeedbackMessage) -> bool;
    fn my_interfaces__action__CountUp_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CountUp_FeedbackMessage>, size: usize) -> bool;
    fn my_interfaces__action__CountUp_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CountUp_FeedbackMessage>);
    fn my_interfaces__action__CountUp_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CountUp_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<CountUp_FeedbackMessage>) -> bool;
}

// Corresponds to my_interfaces__action__CountUp_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::CountUp_Feedback,

}



impl Default for CountUp_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__CountUp_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__CountUp_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CountUp_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CountUp_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CountUp_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/CountUp_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_FeedbackMessage() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_Goal() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__ArithmeticChecker_Goal__init(msg: *mut ArithmeticChecker_Goal) -> bool;
    fn my_interfaces__action__ArithmeticChecker_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Goal>, size: usize) -> bool;
    fn my_interfaces__action__ArithmeticChecker_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Goal>);
    fn my_interfaces__action__ArithmeticChecker_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticChecker_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Goal>) -> bool;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticChecker_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_sum: f32,

}



impl Default for ArithmeticChecker_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__ArithmeticChecker_Goal__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__ArithmeticChecker_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticChecker_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticChecker_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticChecker_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/ArithmeticChecker_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_Goal() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_Result() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__ArithmeticChecker_Result__init(msg: *mut ArithmeticChecker_Result) -> bool;
    fn my_interfaces__action__ArithmeticChecker_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Result>, size: usize) -> bool;
    fn my_interfaces__action__ArithmeticChecker_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Result>);
    fn my_interfaces__action__ArithmeticChecker_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticChecker_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Result>) -> bool;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticChecker_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub total_sum: f32,

}



impl Default for ArithmeticChecker_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__ArithmeticChecker_Result__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__ArithmeticChecker_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticChecker_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticChecker_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticChecker_Result where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/ArithmeticChecker_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_Result() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__ArithmeticChecker_Feedback__init(msg: *mut ArithmeticChecker_Feedback) -> bool;
    fn my_interfaces__action__ArithmeticChecker_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Feedback>, size: usize) -> bool;
    fn my_interfaces__action__ArithmeticChecker_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Feedback>);
    fn my_interfaces__action__ArithmeticChecker_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticChecker_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_Feedback>) -> bool;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticChecker_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_num: f32,

}



impl Default for ArithmeticChecker_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__ArithmeticChecker_Feedback__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__ArithmeticChecker_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticChecker_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticChecker_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticChecker_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/ArithmeticChecker_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_Feedback() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__ArithmeticChecker_FeedbackMessage__init(msg: *mut ArithmeticChecker_FeedbackMessage) -> bool;
    fn my_interfaces__action__ArithmeticChecker_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_FeedbackMessage>, size: usize) -> bool;
    fn my_interfaces__action__ArithmeticChecker_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_FeedbackMessage>);
    fn my_interfaces__action__ArithmeticChecker_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticChecker_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_FeedbackMessage>) -> bool;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticChecker_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ArithmeticChecker_Feedback,

}



impl Default for ArithmeticChecker_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__ArithmeticChecker_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__ArithmeticChecker_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticChecker_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticChecker_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticChecker_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/ArithmeticChecker_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_FeedbackMessage() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_Goal() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__PlayRound_Goal__init(msg: *mut PlayRound_Goal) -> bool;
    fn my_interfaces__action__PlayRound_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Goal>, size: usize) -> bool;
    fn my_interfaces__action__PlayRound_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Goal>);
    fn my_interfaces__action__PlayRound_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayRound_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Goal>) -> bool;
}

// Corresponds to my_interfaces__action__PlayRound_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayRound_Goal {
    /// Goal - 문제
    pub word: rosidl_runtime_rs::String,

}



impl Default for PlayRound_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__PlayRound_Goal__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__PlayRound_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayRound_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayRound_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayRound_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/PlayRound_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_Goal() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_Result() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__PlayRound_Result__init(msg: *mut PlayRound_Result) -> bool;
    fn my_interfaces__action__PlayRound_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Result>, size: usize) -> bool;
    fn my_interfaces__action__PlayRound_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Result>);
    fn my_interfaces__action__PlayRound_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayRound_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Result>) -> bool;
}

// Corresponds to my_interfaces__action__PlayRound_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayRound_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub done: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub board_result: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tries: i32,

}



impl Default for PlayRound_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__PlayRound_Result__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__PlayRound_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayRound_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayRound_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayRound_Result where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/PlayRound_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_Result() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__PlayRound_Feedback__init(msg: *mut PlayRound_Feedback) -> bool;
    fn my_interfaces__action__PlayRound_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Feedback>, size: usize) -> bool;
    fn my_interfaces__action__PlayRound_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Feedback>);
    fn my_interfaces__action__PlayRound_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayRound_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayRound_Feedback>) -> bool;
}

// Corresponds to my_interfaces__action__PlayRound_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayRound_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub letter: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub board_progress: rosidl_runtime_rs::String,

}



impl Default for PlayRound_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__PlayRound_Feedback__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__PlayRound_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayRound_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayRound_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayRound_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/PlayRound_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_Feedback() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__PlayRound_FeedbackMessage__init(msg: *mut PlayRound_FeedbackMessage) -> bool;
    fn my_interfaces__action__PlayRound_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_FeedbackMessage>, size: usize) -> bool;
    fn my_interfaces__action__PlayRound_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_FeedbackMessage>);
    fn my_interfaces__action__PlayRound_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayRound_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayRound_FeedbackMessage>) -> bool;
}

// Corresponds to my_interfaces__action__PlayRound_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayRound_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PlayRound_Feedback,

}



impl Default for PlayRound_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__PlayRound_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__PlayRound_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayRound_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayRound_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayRound_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/PlayRound_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_FeedbackMessage() }
  }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__CountUp_SendGoal_Request__init(msg: *mut CountUp_SendGoal_Request) -> bool;
    fn my_interfaces__action__CountUp_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CountUp_SendGoal_Request>, size: usize) -> bool;
    fn my_interfaces__action__CountUp_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CountUp_SendGoal_Request>);
    fn my_interfaces__action__CountUp_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CountUp_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CountUp_SendGoal_Request>) -> bool;
}

// Corresponds to my_interfaces__action__CountUp_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::CountUp_Goal,

}



impl Default for CountUp_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__CountUp_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__CountUp_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CountUp_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CountUp_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CountUp_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/CountUp_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_SendGoal_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__CountUp_SendGoal_Response__init(msg: *mut CountUp_SendGoal_Response) -> bool;
    fn my_interfaces__action__CountUp_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CountUp_SendGoal_Response>, size: usize) -> bool;
    fn my_interfaces__action__CountUp_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CountUp_SendGoal_Response>);
    fn my_interfaces__action__CountUp_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CountUp_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CountUp_SendGoal_Response>) -> bool;
}

// Corresponds to my_interfaces__action__CountUp_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for CountUp_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__CountUp_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__CountUp_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CountUp_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CountUp_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CountUp_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/CountUp_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_SendGoal_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__CountUp_GetResult_Request__init(msg: *mut CountUp_GetResult_Request) -> bool;
    fn my_interfaces__action__CountUp_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CountUp_GetResult_Request>, size: usize) -> bool;
    fn my_interfaces__action__CountUp_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CountUp_GetResult_Request>);
    fn my_interfaces__action__CountUp_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CountUp_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CountUp_GetResult_Request>) -> bool;
}

// Corresponds to my_interfaces__action__CountUp_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for CountUp_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__CountUp_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__CountUp_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CountUp_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CountUp_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CountUp_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/CountUp_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_GetResult_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__CountUp_GetResult_Response__init(msg: *mut CountUp_GetResult_Response) -> bool;
    fn my_interfaces__action__CountUp_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CountUp_GetResult_Response>, size: usize) -> bool;
    fn my_interfaces__action__CountUp_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CountUp_GetResult_Response>);
    fn my_interfaces__action__CountUp_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CountUp_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CountUp_GetResult_Response>) -> bool;
}

// Corresponds to my_interfaces__action__CountUp_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CountUp_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::CountUp_Result,

}



impl Default for CountUp_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__CountUp_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__CountUp_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CountUp_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__CountUp_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CountUp_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CountUp_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/CountUp_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__CountUp_GetResult_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__ArithmeticChecker_SendGoal_Request__init(msg: *mut ArithmeticChecker_SendGoal_Request) -> bool;
    fn my_interfaces__action__ArithmeticChecker_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_SendGoal_Request>, size: usize) -> bool;
    fn my_interfaces__action__ArithmeticChecker_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_SendGoal_Request>);
    fn my_interfaces__action__ArithmeticChecker_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticChecker_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_SendGoal_Request>) -> bool;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticChecker_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ArithmeticChecker_Goal,

}



impl Default for ArithmeticChecker_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__ArithmeticChecker_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__ArithmeticChecker_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticChecker_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticChecker_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticChecker_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/ArithmeticChecker_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_SendGoal_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__ArithmeticChecker_SendGoal_Response__init(msg: *mut ArithmeticChecker_SendGoal_Response) -> bool;
    fn my_interfaces__action__ArithmeticChecker_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_SendGoal_Response>, size: usize) -> bool;
    fn my_interfaces__action__ArithmeticChecker_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_SendGoal_Response>);
    fn my_interfaces__action__ArithmeticChecker_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticChecker_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_SendGoal_Response>) -> bool;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticChecker_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ArithmeticChecker_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__ArithmeticChecker_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__ArithmeticChecker_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticChecker_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticChecker_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticChecker_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/ArithmeticChecker_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_SendGoal_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__ArithmeticChecker_GetResult_Request__init(msg: *mut ArithmeticChecker_GetResult_Request) -> bool;
    fn my_interfaces__action__ArithmeticChecker_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_GetResult_Request>, size: usize) -> bool;
    fn my_interfaces__action__ArithmeticChecker_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_GetResult_Request>);
    fn my_interfaces__action__ArithmeticChecker_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticChecker_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_GetResult_Request>) -> bool;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticChecker_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ArithmeticChecker_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__ArithmeticChecker_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__ArithmeticChecker_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticChecker_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticChecker_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticChecker_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/ArithmeticChecker_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_GetResult_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__ArithmeticChecker_GetResult_Response__init(msg: *mut ArithmeticChecker_GetResult_Response) -> bool;
    fn my_interfaces__action__ArithmeticChecker_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_GetResult_Response>, size: usize) -> bool;
    fn my_interfaces__action__ArithmeticChecker_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_GetResult_Response>);
    fn my_interfaces__action__ArithmeticChecker_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArithmeticChecker_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ArithmeticChecker_GetResult_Response>) -> bool;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArithmeticChecker_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ArithmeticChecker_Result,

}



impl Default for ArithmeticChecker_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__ArithmeticChecker_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__ArithmeticChecker_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArithmeticChecker_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__ArithmeticChecker_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArithmeticChecker_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArithmeticChecker_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/ArithmeticChecker_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__ArithmeticChecker_GetResult_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__PlayRound_SendGoal_Request__init(msg: *mut PlayRound_SendGoal_Request) -> bool;
    fn my_interfaces__action__PlayRound_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_SendGoal_Request>, size: usize) -> bool;
    fn my_interfaces__action__PlayRound_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_SendGoal_Request>);
    fn my_interfaces__action__PlayRound_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayRound_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayRound_SendGoal_Request>) -> bool;
}

// Corresponds to my_interfaces__action__PlayRound_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayRound_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PlayRound_Goal,

}



impl Default for PlayRound_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__PlayRound_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__PlayRound_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayRound_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayRound_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayRound_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/PlayRound_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_SendGoal_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__PlayRound_SendGoal_Response__init(msg: *mut PlayRound_SendGoal_Response) -> bool;
    fn my_interfaces__action__PlayRound_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_SendGoal_Response>, size: usize) -> bool;
    fn my_interfaces__action__PlayRound_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_SendGoal_Response>);
    fn my_interfaces__action__PlayRound_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayRound_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayRound_SendGoal_Response>) -> bool;
}

// Corresponds to my_interfaces__action__PlayRound_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayRound_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PlayRound_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__PlayRound_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__PlayRound_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayRound_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayRound_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayRound_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/PlayRound_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_SendGoal_Response() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__PlayRound_GetResult_Request__init(msg: *mut PlayRound_GetResult_Request) -> bool;
    fn my_interfaces__action__PlayRound_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_GetResult_Request>, size: usize) -> bool;
    fn my_interfaces__action__PlayRound_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_GetResult_Request>);
    fn my_interfaces__action__PlayRound_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayRound_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayRound_GetResult_Request>) -> bool;
}

// Corresponds to my_interfaces__action__PlayRound_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayRound_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PlayRound_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__PlayRound_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__PlayRound_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayRound_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayRound_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayRound_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/PlayRound_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_GetResult_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__action__PlayRound_GetResult_Response__init(msg: *mut PlayRound_GetResult_Response) -> bool;
    fn my_interfaces__action__PlayRound_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_GetResult_Response>, size: usize) -> bool;
    fn my_interfaces__action__PlayRound_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayRound_GetResult_Response>);
    fn my_interfaces__action__PlayRound_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayRound_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayRound_GetResult_Response>) -> bool;
}

// Corresponds to my_interfaces__action__PlayRound_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayRound_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PlayRound_Result,

}



impl Default for PlayRound_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__action__PlayRound_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__action__PlayRound_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayRound_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__action__PlayRound_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayRound_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayRound_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/action/PlayRound_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__action__PlayRound_GetResult_Response() }
  }
}






#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__CountUp_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__CountUp_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct CountUp_SendGoal;

impl rosidl_runtime_rs::Service for CountUp_SendGoal {
    type Request = CountUp_SendGoal_Request;
    type Response = CountUp_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__CountUp_SendGoal() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__CountUp_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__CountUp_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct CountUp_GetResult;

impl rosidl_runtime_rs::Service for CountUp_GetResult {
    type Request = CountUp_GetResult_Request;
    type Response = CountUp_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__CountUp_GetResult() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__ArithmeticChecker_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ArithmeticChecker_SendGoal;

impl rosidl_runtime_rs::Service for ArithmeticChecker_SendGoal {
    type Request = ArithmeticChecker_SendGoal_Request;
    type Response = ArithmeticChecker_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__ArithmeticChecker_SendGoal() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__ArithmeticChecker_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__ArithmeticChecker_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ArithmeticChecker_GetResult;

impl rosidl_runtime_rs::Service for ArithmeticChecker_GetResult {
    type Request = ArithmeticChecker_GetResult_Request;
    type Response = ArithmeticChecker_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__ArithmeticChecker_GetResult() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__PlayRound_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__PlayRound_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayRound_SendGoal;

impl rosidl_runtime_rs::Service for PlayRound_SendGoal {
    type Request = PlayRound_SendGoal_Request;
    type Response = PlayRound_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__PlayRound_SendGoal() }
    }
}




#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__PlayRound_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__action__PlayRound_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayRound_GetResult;

impl rosidl_runtime_rs::Service for PlayRound_GetResult {
    type Request = PlayRound_GetResult_Request;
    type Response = PlayRound_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__action__PlayRound_GetResult() }
    }
}


