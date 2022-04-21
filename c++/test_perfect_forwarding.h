#ifndef TEST_PERFECT_FORWARDING
#define TEST_PERFECT_FORWARDING


template<typename T>
void testVal(T&& val) {
	std::cout << "val = " << val << std::endl;
	std::cout << "type = " << typeid(val).name() << std::endl;
	return;
}

test_perfect_forwarding() {
  int val = 12;
  testVal(val);
  testVal(14);
}

#endif
