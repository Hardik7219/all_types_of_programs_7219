import tkinter as tk

root=tk.Tk()

title=tk.Label(root,font=("Arial",10),fg="red",text="Youtube video download")
title.pack()

Frame=tk.Frame(root)
Frame.pack(pady=500)

URL=tk.Label(Frame,text="Enter URL")
URL.pack()
url=tk.Entry(Frame,width=30)
url.pack()

btn=tk.Button(Frame,text="Download",bg="green",fg="white",font=("Arial",8,"bold"))
btn.pack(pady=50)

root.mainloop()

