///Add
#if defined(__BL_SHOP_SOLD__)
	PyModule_AddIntConstant(poModule, "__BL_SHOP_SOLD__", true);
#else
	PyModule_AddIntConstant(poModule, "__BL_SHOP_SOLD__", false);
#endif