#Find in : def SetShopItem(self, slotIndex):
		self.AppendPrice(price)

#Add
		if app.__BL_SHOP_SOLD__:
			buyer_name = shop.GetItemBuyerName(slotIndex)
			if buyer_name:
				self.AppendSpace(5)
				self.AppendTextLine("[Sold]", self.SPECIAL_TITLE_COLOR)
				self.AppendTextLine("{}".format(buyer_name), self.SPECIAL_POSITIVE_COLOR2)
				self.AppendTextLine("{}".format(shop.GetItemBuyTime(slotIndex)), self.SPECIAL_POSITIVE_COLOR2)