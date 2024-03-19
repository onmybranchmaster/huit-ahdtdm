from ._anvil_designer import HomeFormTemplate
from anvil import *
import anvil.server
import anvil.tables as tables
import anvil.tables.query as q
from anvil.tables import app_tables

#
# This is the Python code that makes this feedback form work.
# It's a Python class, with a method that runs when the user
# clicks the SUBMIT button.
#
# When the button is clicked, we send the contents of the
# text boxes to our Server Module. The Server Module records
# the feedback in the database, and sends an email to the
# app's owner (that's you!).
#
# To find the Server Module, look under "Server Code" on the
# left.
#

class HomeForm(HomeFormTemplate):
  def __init__(self, *args, **kwargs):
    super().__init__(*args, **kwargs)

  def button_1_click(self, **event_args):
    numbers = self.text_box_1.text.split(" ")
    numbers = list(map(int, numbers))
    sorted_numbers = anvil.server.call("selection_sort", numbers)
    self.text_box_1.text = " ".join(map(str, sorted_numbers))
    print(numbers)
    print(sorted_numbers)
    pass
