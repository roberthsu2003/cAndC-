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

    specialNum = luckyNums.pop()
    labelText.set('號碼:{},\n特別號:{}'.format(sorted(luckyNums),specialNum))



root = Tk()
root.title("大樂透中獎號碼")
#root.geometry("300x400")
root.option_add("*Font",("verdana", 18))
mainFrame = Frame(root)
btn = Button(mainFrame, text="大樂透號碼", padx=100, pady=20,command=getSevenNumber)
btn.pack(expand=YES, fill=BOTH,padx=40, pady=40)
labelText = StringVar()
labelText.set("號碼")
answerLabel = Label(mainFrame,textvariable=labelText,font=("Helvetica", 16),anchor=W)
answerLabel.pack(expand=YES, fill=BOTH,padx=40, pady=40)
mainFrame.pack(expand=YES, fill=BOTH)


root.mainloop()
