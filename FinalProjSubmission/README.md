# Correctness:

Before running the evaluation framework, upload the dataset.lisp file containing all of your Lisp programs separated by "##". Also make sure to insert your HuggingFace API key in to the "api_key" variable to make LLM calls.

Then, the `Lisp->C Translator Evaluation Framework` notebook can be run and the LLM will generate translations. Three output files will be created after the program has finished running:
1. lisp_results.txt containing the output of each Lisp program
2. c_programs.txt containing the C programs from the LLM translation
3. c_results.txt containing the output of each C program

Rarely, the LLM will output additional text that causes the C program to not compile. This can be remedied by manually removing the text, running the C program again, and updating the results in c_results.txt.

Finally, the manual correctness evaluation can be done as follows:
1. Open up lisp_results.txt and c_results.txt side by side and compare outputs
2. For each result in c_results.txt, record the category (either Functionally Correct, Functionally Incorrect, Semantically Incorrect, or Syntactically Incorrect).

# Humanness:

Like before, set your API keys.

For Haskell test cases: add your code **in a separate file** in the HS_Dataset folder.

Use `humanness.ipynb` to perform the translation. Your result will be in the `HS_Output` folder.
Make sure to use the appropriate cell in the notebook

**NOTE**: by doing this, you are basically just running a machine translation on whatever input code you provide.
The actual humanness evaluation is done manually, not automatically.
