import os
import sys

cwd = os.listdir()
number_to_insert_str = sys.argv[1]
c_filenames_unsorted = [filename for filename in cwd if ".c" in filename]
 
new_filename = number_to_insert_str + ".c"

if new_filename not in c_filenames_unsorted:
    new_file = open(new_filename, "w")
    new_file.write("new file")
    new_file.close()
    sys.exit(0)

number = int(number_to_insert_str)
num_files = len(c_filenames_unsorted)

for i in range(num_files, number - 1, -1):
    os.rename(str(i) + ".c", str(i + 1) + ".c")

new_file = open(new_filename, "w")
new_file.write("new file")
new_file.close()


