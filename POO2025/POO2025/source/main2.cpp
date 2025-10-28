#include "Prerequisites.h"
#include "programmingPatterns/Proxy/Proxy.h"


int main() {
	Proxy* proxy = new Proxy();
	proxy->Request();
	proxy->Request();

	delete proxy;

	return 0;
};