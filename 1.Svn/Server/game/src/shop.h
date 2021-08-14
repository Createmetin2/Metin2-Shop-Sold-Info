///Add
#if defined(__BL_SHOP_SOLD__)
#include "item.h"
#endif

//Find
		typedef struct shop_item
		
///Add Above
#if defined(__BL_SHOP_SOLD__)
		struct SShopSoldItemData
		{
			SShopSoldItemData(const char* szBuyerName, LPITEM item)
				: sBuyerName(szBuyerName)
			{
				thecore_memcpy(alSockets, item->GetSockets(), sizeof(alSockets));
				thecore_memcpy(aAttr, item->GetAttributes(), sizeof(aAttr));
			}

			std::string sBuyerName;
			long alSockets[ITEM_SOCKET_MAX_NUM];
			TPlayerItemAttribute aAttr[ITEM_ATTRIBUTE_MAX_NUM];
		};
#endif

//Find
			int		itemid;
			
///Add
#if defined(__BL_SHOP_SOLD__)
			std::unique_ptr<SShopSoldItemData> m_Sold = nullptr;
#endif