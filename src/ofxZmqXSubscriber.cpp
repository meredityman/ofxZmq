#include "ofxZmqXSubscriber.h"

ofxZmqXSubscriber::ofxZmqXSubscriber() : ofxZmqSocket(ZMQ_XSUB)
{
}

void ofxZmqXSubscriber::bind(string addr)
{
	ofxZmqSocket::bind(addr);
}

void ofxZmqXSubscriber::unbind(string addr)
{
	ofxZmqSocket::unbind(addr);
}


bool ofxZmqXSubscriber::receive(string &data)
{
	return ofxZmqSocket::receive(data);
}

bool ofxZmqXSubscriber::receive(ofBuffer &data)
{
	return ofxZmqSocket::receive(data);
}

bool ofxZmqXSubscriber::hasWaitingMessage(long timeout_millis)
{
	return ofxZmqSocket::hasWaitingMessage(timeout_millis);
}

bool ofxZmqXSubscriber::getNextMessage(string &data)
{
	return ofxZmqSocket::getNextMessage(data);
}

bool ofxZmqXSubscriber::getNextMessage(ofBuffer &data)
{
	return ofxZmqSocket::getNextMessage(data);
}

