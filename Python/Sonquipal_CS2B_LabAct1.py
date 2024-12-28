#Initializes an empty list to store tasks
todo_list = []

while True:
    print("\nOptions:")
    print("1.add_task")
    print("2.remove_task")
    print("3.view_list")
    print("4.Exit")

    choice = input("what would you like to do? :>: ")
    
    #Add's a list you want
    if choice == '1':
        task = input("Enter the task: ")
        todo_list.append(task)
        print(f"Added '{task}' on today's list.")
    #Task remover
    elif choice == '2':
        if not todo_list:
            print("You haven't add some lists.")
        else:
            print("Today's List:")
            for index, task in enumerate(todo_list, start=1):
                print(f"{index}. {task}")
            task_number = int(input("Enter the number of the task to remove: "))
            if 1 <= task_number <= len(todo_list):
                removed_task = todo_list.pop(task_number - 1)
                print(f"'{removed_task}' removed from today's list.")
            else:
                print("there is no such a task existed :<")
    #View's the list you made
    elif choice == '3':
        if not todo_list:
            print("no list for today :>.")
        else:
            print("Today's List:")
            for index, task in enumerate(todo_list, start=1):
                print(f"{index}. {task}")
    #Exit program
    elif choice == '4':
        print("Bye :>")
        break
    else:
        print(">:(")