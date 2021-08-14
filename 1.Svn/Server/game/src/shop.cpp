//Find in : int CShop::Buy(LPCHARACTER ch, BYTE pos)
	if (r_item.price <= 0)
	{
		LogManager::instance().HackLog("SHOP_BUY_GOLD_OVERFLOW", ch);
		return SHOP_SUBHEADER_GC_NOT_ENOUGH_MONEY;
	}
	
///Add
#if defined(__BL_SHOP_SOLD__)
	if (r_item.m_Sold != nullptr)
		return SHOP_SUBHEADER_GC_SOLD_OUT;
#endif

//Find in : int CShop::Buy(LPCHARACTER ch, BYTE pos)
		r_item.pkItem = NULL;
		
///Add Above
#if  defined(__BL_SHOP_SOLD__)
		r_item.m_Sold = std::make_unique< SShopSoldItemData >(ch->GetName(), r_item.pkItem);
#endif

//Find in : bool CShop::AddGuest(LPCHARACTER ch, DWORD owner_vid, bool bOtherEmpire)
		if (m_pkPC && !item.pkItem)
			continue;
		
///Change
#if !defined(__BL_SHOP_SOLD__)
		if (m_pkPC && !item.pkItem)
			continue;
#endif

//Find in : bool CShop::AddGuest(LPCHARACTER ch, DWORD owner_vid, bool bOtherEmpire)
		if (item.pkItem)
		{
			thecore_memcpy(pack2.items[i].alSockets, item.pkItem->GetSockets(), sizeof(pack2.items[i].alSockets));
			thecore_memcpy(pack2.items[i].aAttr, item.pkItem->GetAttributes(), sizeof(pack2.items[i].aAttr));
		}
		
///Add
#if defined(__BL_SHOP_SOLD__)
		else if (m_pkPC)
		{
			const auto& SoldData = item.m_Sold;
			if (SoldData != nullptr) {
				strlcpy(pack2.items[i].szBuyerName, SoldData->sBuyerName.c_str(), sizeof(pack2.items[i].szBuyerName));
				thecore_memcpy(pack2.items[i].alSockets, SoldData->alSockets, sizeof(pack2.items[i].alSockets));
				thecore_memcpy(pack2.items[i].aAttr, SoldData->aAttr, sizeof(pack2.items[i].aAttr));
			}
		}
#endif

//Find in : void CShop::BroadcastUpdateItem(BYTE pos)
	if (m_pkPC && !m_itemVector[pos].pkItem)
		pack2.item.vnum = 0;
	
///Change
	if (m_pkPC && !m_itemVector[pos].pkItem)
#if defined(__BL_SHOP_SOLD__)
	{
		pack2.item.vnum = 0;
		const auto& SoldData = m_itemVector[pos].m_Sold;
		if (SoldData != nullptr) {
			pack2.item.vnum = m_itemVector[pos].vnum;
			strlcpy(pack2.item.szBuyerName, SoldData->sBuyerName.c_str(), sizeof(pack2.item.szBuyerName));
			thecore_memcpy(pack2.item.alSockets, SoldData->alSockets, sizeof(pack2.item.alSockets));
			thecore_memcpy(pack2.item.aAttr, SoldData->aAttr, sizeof(pack2.item.aAttr));
		}
	}
#else
		pack2.item.vnum = 0;
#endif

//Find in : void CShop::BroadcastUpdateItem(BYTE pos)
		pack2.item.vnum	= m_itemVector[pos].vnum;
		
///Add
#if defined(__BL_SHOP_SOLD__)
		memset(pack2.item.szBuyerName, 0, sizeof(pack2.item.szBuyerName));
#endif