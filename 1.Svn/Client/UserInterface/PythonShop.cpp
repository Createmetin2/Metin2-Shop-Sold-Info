///Add
#if defined(__BL_SHOP_SOLD__)
PyObject* shopGetItemBuyerName(PyObject* poSelf, PyObject* poArgs)
{
	int iIndex;
	if (!PyTuple_GetInteger(poArgs, 0, &iIndex))
		return Py_BuildException();

	const TShopItemData* c_pItemData;
	if (CPythonShop::Instance().GetItemData(iIndex, &c_pItemData))
		return Py_BuildValue("s", c_pItemData->szBuyerName);

	return Py_BuildValue("s", "");
}
#endif

//Find
		{ "GetItemAttribute",			shopGetItemAttribute,			METH_VARARGS },
		
///Add
#if defined(__BL_SHOP_SOLD__)
		{ "GetItemBuyerName",			shopGetItemBuyerName,			METH_VARARGS },
#endif