#ifndef _APE_BASE_PARSER_H_
#define _APE_BASE_PARSER_H_
#include "events.h"
#include "buffer.h"
#include "protocol.h"
#include <list>

namespace ape{
namespace protocol{

class CBaseParser {
 public:
    virtual ape::message::SNetMessage *CreateMessage() = 0;
    virtual ape::message::SNetMessage *CreateHeartBeatMessage(ape::message::SNetMessage::SMessageType type = ape::message::SNetMessage::E_Request) = 0;
    /** return value p
        p == NULL //error
        p == buf incomplete packet, continue to read
        p == buf + len //complete
        p < buf + len  //more than one packet; p point to the next packet address
    */
    virtual const char *Decode(const char *buf, int len, ape::message::SNetMessage *msg) = 0;
    virtual int Encode(const ape::message::SNetMessage *msg, ape::common::CBuffer *out) = 0;
    virtual void Release() = 0;
};
class ParserFactory {
 public:
  virtual CBaseParser *CreateParser() = 0;
  virtual ~ParserFactory() {}
};


}
}
#endif

