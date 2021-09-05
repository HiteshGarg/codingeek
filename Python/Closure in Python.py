def func_out(message):
    msg = message

    def func_in():
        print(msg)

    func_in()


func_out('Welcome to coding world')

########################################################

def func_out(message):
    msg = message

    def func_in():
        print(msg)

    return func_in


callable = func_out('Welcome to coding world')
callable()
callable()

########################################################

import logging
logging.basicConfig(filename='test.log', level=logging.INFO)
def logger(sys_value):
  def check_log(*args):
    logging.info('Running "{}" with values {}'.format(
        sys_value.__name__, args))
    print(sys_value(*args))
  # Necessary for closure
  # returning WITHOUT parenthesis
  return check_log
def new(val1, val2):
  return val1+val2
def remove(val1, val2):
  return val1-val2
new_log = logger(new)
remove_log = logger(remove)
new_log(2, 7)
new_log(8, 4)
new_log(11, 7)
remove_log(15, 2)
remove_log(32, 11)
remove_log(21, 2)

#########################################################

def divide_manytimes(divisor):
  def divide(value):
    return value / divisor
  return divide
div_by_2 = divide_manytimes(2)
div_by_4 = divide_manytimes(4)
print(div_by_2(16))
print(div_by_4(48))
print(div_by_4(div_by_2(16)))


