# GAME : SNAKE WATER GUN  
import random 
user_wins =0
comp_wins = 0

def check (comp , user):

    if comp==user:
         return 0

    if comp=="s" and user=="w":
        return -1

    if comp=="w" and user=="g":
        return -1

    return 1 

choices =["s","w","g"]
while True:
    user=input("s for snake , w for water , g for gun and q for Quit : \n")

    if user == "q":
        print("quit , out of game")
        break

    if user not in ["s","w","g","q"]:
        print("Invalid output ,GAME OVER ")    
        break

    comp = random.choice(choices)
    score = check(comp,user)

    print("You : ", user )
    print("Computer",comp)

    if score==0:
        print("Its a Draw")
    elif score==-1:
        print("You Lose")
        comp_wins+=1
    else:
        print("You won congratulations 🎉 ")
        user_wins+=1
print ("You won",user_wins ,"times")
print ("Comp won",comp_wins,"times")