/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "student_types.h"

#include <algorithm>

namespace teststudent {

const char* Student::ascii_fingerprint = "52F7D5E8217C4B8FC14F1F30BF2EB41C";
const uint8_t Student::binary_fingerprint[16] = {0x52,0xF7,0xD5,0xE8,0x21,0x7C,0x4B,0x8F,0xC1,0x4F,0x1F,0x30,0xBF,0x2E,0xB4,0x1C};

uint32_t Student::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->no);
          this->__isset.no = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->age);
          this->__isset.age = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Student::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Student");

  xfer += oprot->writeFieldBegin("no", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->no);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("age", ::apache::thrift::protocol::T_I16, 3);
  xfer += oprot->writeI16(this->age);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Student &a, Student &b) {
  using ::std::swap;
  swap(a.no, b.no);
  swap(a.name, b.name);
  swap(a.age, b.age);
  swap(a.__isset, b.__isset);
}

} // namespace
