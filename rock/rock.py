import random

items = {1: "Камень", 2: "Ножницы", 3: "Бумага"}
while True:
    print("".join(f"{k}. {v}\n" for k, v in items.items()))

    bot = random.randint(1, 3)
    try:
        user = int(input("Ваш вариант:"))
    except ValueError:
        user = None

    if items.get(user) is None:
        print("Выберите 1,2 или 3", end="\n")
    else:
        print(f"Бот: {items[bot]}\nВы: {items[user]}\n")

    if bot == user:
        print("Ничья")
    elif ((bot == 1 and user == 2) or (bot == 2 and user == 3) or (bot == 3 and user == 1)):
        print("Вы проиграли")
    else:
        print("Вы выиграли")

    print("***\n")


