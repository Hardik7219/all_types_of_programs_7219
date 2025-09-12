from kivy.app import App
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.textinput import TextInput
from kivy.uix.button import Button
from kivy.uix.label import Label
from kivy.uix.scrollview import ScrollView
from kivy.uix.gridlayout import GridLayout
import yt_dlp

class Root(App):
	 def build(self):
	 	
	 	layout = BoxLayout(orientation='vertical',spacing="10")
	 	
	 		
	 	self.input=TextInput(hint_text="Enter URL",size_hint=(1,None),height=50)
	 	layout.add_widget(self.input)
	 	
	 	self.button=Button(text="Download",size_hint=(1,None), height=50)
	 	self.button.bind(on_press=self.dow)
	 	layout.add_widget(self.button)
	 	
	 	self.label = Label(text="")
	 	layout.add_widget(self.label)
	 	return layout
	 	
	 def dow(self, instance):
	 	
	 	url=self.input.text.strip()
	 	if not url:
	 		self.label.text="Please enter a URL"
	 		return
	 	yt_dlp.YoutubeDL({'format': 'best' ,'outtml': '%(title)s.%(ext)s' }).download([url])
	 	self.label.text="Download complete "
	 		
	 	
Root().run()