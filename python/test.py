import tkinter as tk

root=tk.Tk()
root.title("First Screeen")


python_var = tk.IntVar()
java_var = tk.IntVar()

tk.Label(root)
root.geometry("400x200")

lable=tk.Label(root,text="Aditya")
lable.pack()

root.mainloop()