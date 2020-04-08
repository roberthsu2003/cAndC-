from tkinter import *

root = Tk()
root.title("抽獎活動")
#root.geometry("300x400")
root.option_add("*Font",("verdana", 18))
mainFrame = Frame(root)
btn = Button(mainFrame, text="抽獎", padx=100, pady=20)
btn.pack(expand=YES, fill=BOTH,padx=40, pady=40)
answerLabel = Label(mainFrame,text="號碼:",font=("Helvetica", 16),anchor=W)
answerLabel.pack(expand=YES, fill=BOTH,padx=40, pady=40)
mainFrame.pack(expand=YES, fill=BOTH)


root.mainloop()
