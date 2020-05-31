import markdown
import os

root = os.path.abspath(os.pardir)

for subdir, dirs, files in os.walk(root):
    for file in files:
        filepath = os.path.join(subdir, file)
        if filepath.endswith(".md"):
            print(filepath)
            htmlpath = filepath[0:-2] + "html"
            print(htmlpath)
            md_file = open(filepath, "r")
            html_file = open(htmlpath, "w")

            md_content = md_file.read()

            html = markdown.markdown(md_content)
            html_file.write(html)

            md_file.close()
            html_file.close()

