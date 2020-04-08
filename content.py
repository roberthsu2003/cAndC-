from tkinter import *
import random
#自訂的function

def getSevenNumber():
    luckyNums = []
    numbers = list(range(1, 50))
    for _ in range(7):
        luckyIndex = random.randint(0,len(numbers)-1)
        luckyNum = numbers.pop(luckyIndex)
        luckyNums.append(luckyNum)
    print(sorted(luckyNums))



root = Tk()
root.title("抽獎活動")
#root.geometry("300x400")
root.option_add("*Font",("verdana", 18))
mainFrame = Frame(root)
btn = Button(mainFrame, text="抽獎", padx=100, pady=20,command=getSevenNumber)
btn.pack(expand=YES, fill=BOTH,padx=40, pady=40)
answerLabel = Label(mainFrame,text="號碼:",font=("Helvetica", 16),anchor=W)
answerLabel.pack(expand=YES, fill=BOTH,padx=40, pady=40)
mainFrame.pack(expand=YES, fill=BOTH)


root.mainloop()
