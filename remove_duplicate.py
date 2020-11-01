n = input("Enter a name: ")

def remove_duplicate_letters(name):
    list = []
    
    for letter in name:
            if not(letter >= 'a' and letter <= 'z'): #verification (between a-z)
                quit()
                
            else:
                if len(list) == 0:
                    list.append(letter)                                            

                if list[-1] != letter:
                    list.append(letter)

    print(''.join(list))        

remove_duplicate_letters(n)
