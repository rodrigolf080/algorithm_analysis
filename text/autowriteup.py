filename = 'writeup.txt'
flag = True

with open(filename, 'a') as file_object:
    print("Type 'exit' to quit the program.")
    while flag == True:
        data = input(">>> ")
        if data == "exit":
            flag = False
        else:
            file_object.write(data + "\n")


