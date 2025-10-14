import tkinter as tk
from tkinter import messagebox


tasks=[]
#ADD TASK
def add_task():
	task=entry.get()
	if task.strip()!="":
		tasks.append(task)
		field.insert(tk.END,f":-{task}")
		entry.delete(0,tk.END)
	else:
		messagebox.showwarning("inpute error","Please enter a Task")

#DELETE TASK
def delete_task():
	try:
		selecte_index=field.curselection()[0]
		task=field.get(selecte_index)
		confirm=messagebox.askyesno("Delete",f"Delete task{task}")
		if confirm:
			field.delete(selecte_index)
			#tasks.remove(task)
	except IndexError:
				messagebox.showwarning("Select"," Please select task to delete")

#SAVE FILE
def save_file():
	with open (".\task.txt","w") as file:
		for i in range(field.size()):
			item=field.get(i)
			file.write(item+"\n")
								
#GUI MAIN WINDOW 	
root = tk.Tk()
root.configure(bg="black")

#lable
lable=tk.Label(root,text="ENTER TASK")
lable.pack(pady=10,)

#text field
entry=tk.Entry(root,font=("Monospace" ,15, "bold"))
entry.pack(pady=10)

#buttons
btn_frame=tk.Frame(root,bg="black")
btn_frame.pack(padx=0)

add_button=tk.Button(btn_frame,text="Add task", command=add_task ,width=10 , fg="white" ,bg="#4CAF50")
add_button.grid(row=0, column=0, padx=0)

dlt_button=tk.Button(btn_frame,text="Delete", command=delete_task ,fg="white",width=10, bg="#E40E0E")
dlt_button.grid(row=0, column=2, padx=0)

save_button=tk.Button(btn_frame,text="SAVE" , command=save_file, bg="#F7D812",width=10)
save_button.grid(row=0, column=3, padx=0)

#task list field
field=tk.Listbox(root,width=20,bg="#23E6D0",font=("Monospace" ,15, "bold"))
field.pack(pady=10)

root.mainloop()