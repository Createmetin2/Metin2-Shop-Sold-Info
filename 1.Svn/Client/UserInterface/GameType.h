//Find in typedef struct packet_shop_item
    TPlayerItemAttribute aAttr[ITEM_ATTRIBUTE_SLOT_MAX_NUM];
	
///Add
#if defined(__BL_SHOP_SOLD__)
	char		szBuyerName[/*CHARACTER_NAME_MAX_LEN*/24 + 1];
#endif