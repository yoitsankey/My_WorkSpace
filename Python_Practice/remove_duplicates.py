cart_value = [10,20,50,60,80,10,40,60]
unique_cart = []
for price in cart_value:
    if price not in unique_cart:
        unique_cart.append(price)
unique_cart.sort()
print(unique_cart)