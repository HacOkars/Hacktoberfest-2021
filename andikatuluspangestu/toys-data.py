# Application Title
print("")
print("Children's Toy Store ")
print("********************************************")
print("")

# Enter Purchase Data
BuyerName = str(input("Enter Buyer Name : "))
toycode = str(input("Enter game code : "))
toyprice = int(input("Enter Price : "))
PurchaseAmount = int(input("Enter Purchase Amount : "))
totalPay = toyprice * PurchaseAmount

# Display Barrier
print("")
print("==============================================" )
print("")

# Print Purchase Data Input Results
print("Buyer Name =", BuyerName)
print("Toy Code =",toycode)
print("Price=",toyprice)
print("Amount of Purchase=", PurchaseAmount)
print("Amount = ", totalPay)
print("")
