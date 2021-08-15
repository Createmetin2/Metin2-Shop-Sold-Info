//Find in : struct packet_shop_item
	TPlayerItemAttribute aAttr[ITEM_ATTRIBUTE_MAX_NUM];
	
///Add
#if defined(__BL_SHOP_SOLD__)
	char	szBuyerName[CHARACTER_NAME_MAX_LEN + 1];
	char	szBuyTime[19 + 1];
#endif