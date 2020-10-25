#include "ofxZmqXPublisher.h"

ofxZmqXPublisher::ofxZmqXPublisher() : ofxZmqSocket(ZMQ_XPUB)
{
}

void ofxZmqXPublisher::bind(string addr)
{
	ofxZmqSocket::bind(addr);
}

void ofxZmqXPublisher::unbind(string addr)
{
	ofxZmqSocket::unbind(addr);
}

bool ofxZmqXPublisher::send(const void *data, size_t len, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, len, nonblocking, more);
}

bool ofxZmqXPublisher::send(void *data, size_t len, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, len, nonblocking, more);
}

bool ofxZmqXPublisher::send(const string& data, bool nonblocking, bool more)
{
	return ofxZmqSocket::send((const void*)data.data(), data.size(), nonblocking, more);
}

bool ofxZmqXPublisher::send(const ofBuffer& data, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, nonblocking, more);
}
