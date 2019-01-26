#include "ofxZmqPair.h"

ofxZmqPair::ofxZmqPair() : ofxZmqSocket(ZMQ_PAIR)
{
}

void ofxZmqPair::connect(string addr)
{
	ofxZmqSocket::connect(addr);
}

void ofxZmqPair::bind(string addr)
{
	ofxZmqSocket::bind(addr);
}

bool ofxZmqPair::send(void *data, size_t len, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, len, nonblocking, more);
}

bool ofxZmqPair::send(string* data, bool nonblocking, bool more)
{
    return ofxZmqSocket::send((void*)data->data(), data->size(), nonblocking, more);
}

bool ofxZmqPair::send(ofBuffer* buffer, bool nonblocking, bool more)
{
    return ofxZmqSocket::sendBuffer(buffer, nonblocking, more);
}
/*
bool ofxZmqPair::send(string &data, bool nonblocking, bool more)
{
	return ofxZmqSocket::send((void*)data.data(), data.size(), nonblocking, more);
}

bool ofxZmqPair::send(ofBuffer &data, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, nonblocking, more);
}
*/


bool ofxZmqPair::receive(string &data)
{
	return ofxZmqSocket::receive(data);
}

bool ofxZmqPair::receive(ofBuffer &data)
{
	return ofxZmqSocket::receive(data);
}

bool ofxZmqPair::hasWaitingMessage(long timeout_millis)
{
	return ofxZmqSocket::hasWaitingMessage(timeout_millis);
}

bool ofxZmqPair::getNextMessage(string &data)
{
	return ofxZmqSocket::getNextMessage(data);
}

bool ofxZmqPair::getNextMessage(ofBuffer &data)
{
	return ofxZmqSocket::getNextMessage(data);
}
