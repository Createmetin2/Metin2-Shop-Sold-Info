#Find
			setItemID(i, getItemID(idx), itemCount)

#Add
			if app.__BL_SHOP_SOLD__:
				if shop.GetItemBuyerName(idx):
					self.itemSlotWindow.DisableSlot(i)