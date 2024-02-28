#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxNumber;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxRepetition;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxStep;
	private: System::Windows::Forms::Button^ buttonDataGeneration;
	private: System::Windows::Forms::Button^ buttonSelectionSort;
	private: System::Windows::Forms::Button^ buttonBubbleSort;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;










	private: System::Windows::Forms::Button^ buttonReRun;
	private: System::Windows::Forms::Button^ buttonLoadChart;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::CheckBox^ checkBoxSpline;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartResult;
	private: System::Windows::Forms::ListBox^ listBoxNumberData;
	private: System::Windows::Forms::ListBox^ listBoxSelectionSortTime;

	private: System::Windows::Forms::Button^ buttonQuickSort;
	private: System::Windows::Forms::ListBox^ listBoxBubbleSortTime;
	private: System::Windows::Forms::ListBox^ listBoxQuickSortTime;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxTarget;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxRangeEnd;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxRangeStart;
	private: System::Windows::Forms::ListBox^ listBoxSearchResult;

	private: System::Windows::Forms::Button^ buttonBinarySearch;
	private: System::Windows::Forms::CheckBox^ checkBoxDisplayNumbers;
	private: System::Windows::Forms::RichTextBox^ richTextBoxNumbers;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxRepetition = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxStep = (gcnew System::Windows::Forms::TextBox());
			this->buttonDataGeneration = (gcnew System::Windows::Forms::Button());
			this->buttonSelectionSort = (gcnew System::Windows::Forms::Button());
			this->buttonBubbleSort = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonReRun = (gcnew System::Windows::Forms::Button());
			this->buttonLoadChart = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->checkBoxSpline = (gcnew System::Windows::Forms::CheckBox());
			this->chartResult = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->listBoxNumberData = (gcnew System::Windows::Forms::ListBox());
			this->listBoxSelectionSortTime = (gcnew System::Windows::Forms::ListBox());
			this->buttonQuickSort = (gcnew System::Windows::Forms::Button());
			this->listBoxBubbleSortTime = (gcnew System::Windows::Forms::ListBox());
			this->listBoxQuickSortTime = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTarget = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxRangeEnd = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxRangeStart = (gcnew System::Windows::Forms::TextBox());
			this->listBoxSearchResult = (gcnew System::Windows::Forms::ListBox());
			this->buttonBinarySearch = (gcnew System::Windows::Forms::Button());
			this->checkBoxDisplayNumbers = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBoxNumbers = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartResult))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBoxNumber->Location = System::Drawing::Point(122, 16);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(100, 26);
			this->textBoxNumber->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(19, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"n =";
			// 
			// textBoxRepetition
			// 
			this->textBoxRepetition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBoxRepetition->Location = System::Drawing::Point(371, 16);
			this->textBoxRepetition->Name = L"textBoxRepetition";
			this->textBoxRepetition->Size = System::Drawing::Size(100, 26);
			this->textBoxRepetition->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(257, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"repeatition =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(485, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"step =";
			// 
			// textBoxStep
			// 
			this->textBoxStep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBoxStep->Location = System::Drawing::Point(547, 16);
			this->textBoxStep->Name = L"textBoxStep";
			this->textBoxStep->Size = System::Drawing::Size(100, 26);
			this->textBoxStep->TabIndex = 5;
			// 
			// buttonDataGeneration
			// 
			this->buttonDataGeneration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonDataGeneration->Location = System::Drawing::Point(22, 93);
			this->buttonDataGeneration->Name = L"buttonDataGeneration";
			this->buttonDataGeneration->Size = System::Drawing::Size(177, 30);
			this->buttonDataGeneration->TabIndex = 6;
			this->buttonDataGeneration->Text = L"Data Generation";
			this->buttonDataGeneration->UseVisualStyleBackColor = true;
			this->buttonDataGeneration->Click += gcnew System::EventHandler(this, &Form1::buttonDataGeneration_Click);
			// 
			// buttonSelectionSort
			// 
			this->buttonSelectionSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonSelectionSort->Location = System::Drawing::Point(205, 93);
			this->buttonSelectionSort->Name = L"buttonSelectionSort";
			this->buttonSelectionSort->Size = System::Drawing::Size(125, 30);
			this->buttonSelectionSort->TabIndex = 7;
			this->buttonSelectionSort->Text = L"Selection Sort";
			this->buttonSelectionSort->UseVisualStyleBackColor = true;
			this->buttonSelectionSort->Click += gcnew System::EventHandler(this, &Form1::buttonSelectionSort_Click);
			// 
			// buttonBubbleSort
			// 
			this->buttonBubbleSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonBubbleSort->Location = System::Drawing::Point(334, 93);
			this->buttonBubbleSort->Name = L"buttonBubbleSort";
			this->buttonBubbleSort->Size = System::Drawing::Size(125, 30);
			this->buttonBubbleSort->TabIndex = 8;
			this->buttonBubbleSort->Text = L"Bubble Sort";
			this->buttonBubbleSort->UseVisualStyleBackColor = true;
			this->buttonBubbleSort->Click += gcnew System::EventHandler(this, &Form1::buttonBubbleSort_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(23, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"# of data";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(205, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"(sec.)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(332, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"(sec.)";
			// 
			// buttonReRun
			// 
			this->buttonReRun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonReRun->Location = System::Drawing::Point(23, 275);
			this->buttonReRun->Name = L"buttonReRun";
			this->buttonReRun->Size = System::Drawing::Size(100, 30);
			this->buttonReRun->TabIndex = 15;
			this->buttonReRun->Text = L"Re Run";
			this->buttonReRun->UseVisualStyleBackColor = true;
			this->buttonReRun->Click += gcnew System::EventHandler(this, &Form1::buttonReRun_Click);
			// 
			// buttonLoadChart
			// 
			this->buttonLoadChart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonLoadChart->Location = System::Drawing::Point(482, 275);
			this->buttonLoadChart->Name = L"buttonLoadChart";
			this->buttonLoadChart->Size = System::Drawing::Size(117, 30);
			this->buttonLoadChart->TabIndex = 16;
			this->buttonLoadChart->Text = L"Load Chart";
			this->buttonLoadChart->UseVisualStyleBackColor = true;
			this->buttonLoadChart->Click += gcnew System::EventHandler(this, &Form1::buttonLoadChart_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonClear->Location = System::Drawing::Point(605, 275);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(100, 30);
			this->buttonClear->TabIndex = 17;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Form1::buttonClear_Click);
			// 
			// checkBoxSpline
			// 
			this->checkBoxSpline->AutoSize = true;
			this->checkBoxSpline->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBoxSpline->Location = System::Drawing::Point(391, 278);
			this->checkBoxSpline->Name = L"checkBoxSpline";
			this->checkBoxSpline->Size = System::Drawing::Size(77, 24);
			this->checkBoxSpline->TabIndex = 18;
			this->checkBoxSpline->Text = L"Spline";
			this->checkBoxSpline->UseVisualStyleBackColor = true;
			// 
			// chartResult
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartResult->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartResult->Legends->Add(legend1);
			this->chartResult->Location = System::Drawing::Point(23, 320);
			this->chartResult->Name = L"chartResult";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartResult->Series->Add(series1);
			this->chartResult->Size = System::Drawing::Size(700, 300);
			this->chartResult->TabIndex = 19;
			this->chartResult->Text = L"chart1";
			// 
			// listBoxNumberData
			// 
			this->listBoxNumberData->FormattingEnabled = true;
			this->listBoxNumberData->ItemHeight = 16;
			this->listBoxNumberData->Location = System::Drawing::Point(23, 157);
			this->listBoxNumberData->Name = L"listBoxNumberData";
			this->listBoxNumberData->Size = System::Drawing::Size(176, 100);
			this->listBoxNumberData->TabIndex = 20;
			// 
			// listBoxSelectionSortTime
			// 
			this->listBoxSelectionSortTime->FormattingEnabled = true;
			this->listBoxSelectionSortTime->ItemHeight = 16;
			this->listBoxSelectionSortTime->Location = System::Drawing::Point(205, 157);
			this->listBoxSelectionSortTime->Name = L"listBoxSelectionSortTime";
			this->listBoxSelectionSortTime->Size = System::Drawing::Size(125, 100);
			this->listBoxSelectionSortTime->TabIndex = 21;
			// 
			// buttonQuickSort
			// 
			this->buttonQuickSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonQuickSort->Location = System::Drawing::Point(463, 93);
			this->buttonQuickSort->Name = L"buttonQuickSort";
			this->buttonQuickSort->Size = System::Drawing::Size(125, 30);
			this->buttonQuickSort->TabIndex = 23;
			this->buttonQuickSort->Text = L"Quick Sort";
			this->buttonQuickSort->UseVisualStyleBackColor = true;
			this->buttonQuickSort->Click += gcnew System::EventHandler(this, &Form1::buttonQuickSort_Click);
			// 
			// listBoxBubbleSortTime
			// 
			this->listBoxBubbleSortTime->FormattingEnabled = true;
			this->listBoxBubbleSortTime->ItemHeight = 16;
			this->listBoxBubbleSortTime->Location = System::Drawing::Point(334, 157);
			this->listBoxBubbleSortTime->Name = L"listBoxBubbleSortTime";
			this->listBoxBubbleSortTime->Size = System::Drawing::Size(125, 100);
			this->listBoxBubbleSortTime->TabIndex = 22;
			// 
			// listBoxQuickSortTime
			// 
			this->listBoxQuickSortTime->FormattingEnabled = true;
			this->listBoxQuickSortTime->ItemHeight = 16;
			this->listBoxQuickSortTime->Location = System::Drawing::Point(463, 157);
			this->listBoxQuickSortTime->Name = L"listBoxQuickSortTime";
			this->listBoxQuickSortTime->Size = System::Drawing::Size(125, 100);
			this->listBoxQuickSortTime->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(459, 134);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"(sec.)";
			// 
			// textBoxTarget
			// 
			this->textBoxTarget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBoxTarget->Location = System::Drawing::Point(548, 48);
			this->textBoxTarget->Name = L"textBoxTarget";
			this->textBoxTarget->Size = System::Drawing::Size(100, 26);
			this->textBoxTarget->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(486, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 20);
			this->label8->TabIndex = 30;
			this->label8->Text = L"target";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(258, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 20);
			this->label9->TabIndex = 29;
			this->label9->Text = L"range end";
			// 
			// textBoxRangeEnd
			// 
			this->textBoxRangeEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBoxRangeEnd->Location = System::Drawing::Point(372, 48);
			this->textBoxRangeEnd->Name = L"textBoxRangeEnd";
			this->textBoxRangeEnd->Size = System::Drawing::Size(100, 26);
			this->textBoxRangeEnd->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(20, 51);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 20);
			this->label10->TabIndex = 27;
			this->label10->Text = L"range start";
			// 
			// textBoxRangeStart
			// 
			this->textBoxRangeStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBoxRangeStart->Location = System::Drawing::Point(123, 48);
			this->textBoxRangeStart->Name = L"textBoxRangeStart";
			this->textBoxRangeStart->Size = System::Drawing::Size(100, 26);
			this->textBoxRangeStart->TabIndex = 26;
			// 
			// listBoxSearchResult
			// 
			this->listBoxSearchResult->FormattingEnabled = true;
			this->listBoxSearchResult->ItemHeight = 16;
			this->listBoxSearchResult->Location = System::Drawing::Point(594, 157);
			this->listBoxSearchResult->Name = L"listBoxSearchResult";
			this->listBoxSearchResult->Size = System::Drawing::Size(125, 100);
			this->listBoxSearchResult->TabIndex = 32;
			// 
			// buttonBinarySearch
			// 
			this->buttonBinarySearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonBinarySearch->Location = System::Drawing::Point(594, 93);
			this->buttonBinarySearch->Name = L"buttonBinarySearch";
			this->buttonBinarySearch->Size = System::Drawing::Size(125, 30);
			this->buttonBinarySearch->TabIndex = 33;
			this->buttonBinarySearch->Text = L"Binary Search";
			this->buttonBinarySearch->UseVisualStyleBackColor = true;
			this->buttonBinarySearch->Click += gcnew System::EventHandler(this, &Form1::buttonBinarySearch_Click);
			// 
			// checkBoxDisplayNumbers
			// 
			this->checkBoxDisplayNumbers->AutoSize = true;
			this->checkBoxDisplayNumbers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBoxDisplayNumbers->Location = System::Drawing::Point(205, 278);
			this->checkBoxDisplayNumbers->Name = L"checkBoxDisplayNumbers";
			this->checkBoxDisplayNumbers->Size = System::Drawing::Size(160, 24);
			this->checkBoxDisplayNumbers->TabIndex = 34;
			this->checkBoxDisplayNumbers->Text = L"Display Numbers";
			this->checkBoxDisplayNumbers->UseVisualStyleBackColor = true;
			// 
			// richTextBoxNumbers
			// 
			this->richTextBoxNumbers->Location = System::Drawing::Point(748, 19);
			this->richTextBoxNumbers->Name = L"richTextBoxNumbers";
			this->richTextBoxNumbers->Size = System::Drawing::Size(400, 600);
			this->richTextBoxNumbers->TabIndex = 35;
			this->richTextBoxNumbers->Text = L"Numbers";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->richTextBoxNumbers);
			this->Controls->Add(this->checkBoxDisplayNumbers);
			this->Controls->Add(this->buttonBinarySearch);
			this->Controls->Add(this->listBoxSearchResult);
			this->Controls->Add(this->textBoxTarget);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBoxRangeEnd);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxRangeStart);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->listBoxQuickSortTime);
			this->Controls->Add(this->buttonQuickSort);
			this->Controls->Add(this->listBoxBubbleSortTime);
			this->Controls->Add(this->listBoxSelectionSortTime);
			this->Controls->Add(this->listBoxNumberData);
			this->Controls->Add(this->chartResult);
			this->Controls->Add(this->checkBoxSpline);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonLoadChart);
			this->Controls->Add(this->buttonReRun);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->buttonBubbleSort);
			this->Controls->Add(this->buttonSelectionSort);
			this->Controls->Add(this->buttonDataGeneration);
			this->Controls->Add(this->textBoxStep);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxRepetition);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxNumber);
			this->Name = L"Form1";
			this->Text = L"HW1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartResult))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// Define the 2D List
	public: System::Collections::Generic::List<System::Collections::Generic::List<int>^>^ numbers2D =
			gcnew System::Collections::Generic::List<System::Collections::Generic::List<int>^>();

	private: bool dataGenerationSuccess = false;
	
	private: System::Void buttonDataGeneration_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Clear existing data
			numbers2D->Clear();
			listBoxNumberData->Items->Clear();
			richTextBoxNumbers->Clear(); // Clear the richTextBox content

			// Validate inputs for numeric values and alert the user for invalid inputs
			if (!IsInputValid(textBoxRepetition->Text) || !IsInputValid(textBoxStep->Text) || !IsInputValid(textBoxNumber->Text)) {
				MessageBox::Show("Please enter valid numeric values for repetition, step, and base number.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				dataGenerationSuccess = false;
				return;
			}

			// Read inputs from the text boxes
			int repetitions = Int32::Parse(textBoxRepetition->Text);
			int step = Int32::Parse(textBoxStep->Text);
			int baseNumber = Int32::Parse(textBoxNumber->Text);

			int rangeStart = 0;
			int rangeEnd = baseNumber - 1;
			if (IsInputValid(textBoxRangeStart->Text)) {
				rangeStart = Int32::Parse(textBoxRangeStart->Text);
			}
			if (IsInputValid(textBoxRangeEnd->Text)) {
				rangeEnd = Int32::Parse(textBoxRangeEnd->Text) - 1;
			}

			// Generate random data in repetitions
			Random^ rnd = gcnew Random();
			for (int i = 0; i < repetitions; i++) {
				int n = baseNumber + (i * step); // Calculate the size for this round
				System::Collections::Generic::List<int>^ numbers =
					gcnew System::Collections::Generic::List<int>(); // Create a new list for this round

				System::Text::StringBuilder^ numberString = gcnew System::Text::StringBuilder(); // Create a StringBuilder to compile numbers

				// Populate the list with random numbers and build the string
				for (int j = 0; j < n; j++) {
					int randomNumber = rnd->Next(rangeStart, rangeEnd + 1); // Ensure rangeEnd is inclusive
					numbers->Add(randomNumber);
					numberString->Append(randomNumber + " "); // Append number with a space
				}

				// Add the list to the 2D List
				numbers2D->Add(numbers);
				listBoxNumberData->Items->Add(n);

				// Check if checkBoxNumbers is checked before displaying numbers
				if (checkBoxDisplayNumbers->Checked) {
					// Append the generated numbers for this repetition to the richTextBox, with a newline for each repetition
					richTextBoxNumbers->AppendText("Repetition " + (i + 1) + ": " + numberString->ToString() + "\r\n");
				}
			}
			dataGenerationSuccess = true;
		}
		catch (System::Exception^ ex) {
			// Handle exceptions or invalid inputs
			MessageBox::Show("Data generation failed: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			dataGenerationSuccess = false;
		}
	}



	 // Helper function to validate numeric input
	private: bool IsInputValid(String^ input) {
		int value;
		return Int32::TryParse(input, value);
	}

	// Helper function to check if a list is correctly sorted
	private: bool IsSortedCorrectly(System::Collections::Generic::List<int>^ list) {
		for (int i = 0; i < list->Count - 1; i++) {
			if (list[i] > list[i + 1]) return false;
		}
		return true;
	}

	public: System::Collections::Generic::List<double>^ selectionSortTimes =
		gcnew System::Collections::Generic::List<double>();

	public: System::Collections::Generic::List<System::Collections::Generic::List<int>^>^ sortedNumbers2D =
		gcnew System::Collections::Generic::List<System::Collections::Generic::List<int>^>();

	// Event handler for performing and timing Selection Sort, with separate sorted array
	private: System::Void buttonSelectionSort_Click(System::Object^ sender, System::EventArgs^ e) {
		// Prepare for new sorting operation
		sortedNumbers2D->Clear();
		selectionSortTimes->Clear();
		listBoxSelectionSortTime->Items->Clear();

		for (int i = 0; i < numbers2D->Count; i++) {
			// Copy the current list to be sorted
			auto listCopy = gcnew System::Collections::Generic::List<int>(numbers2D[i]);
			sortedNumbers2D->Add(listCopy); // Add the copy to the separate array

			//skip if sorted
			if (IsSortedCorrectly(listCopy)) {
				listBoxSelectionSortTime->Items->Add("Sorted");
				continue;
			}

			// Start timing the sort operation
			auto startTime = System::Diagnostics::Stopwatch::StartNew();
			SelectionSort(listCopy); // Sort the copied list
			startTime->Stop();

			// Calculate and record the time taken
			double timeTaken = startTime->Elapsed.TotalSeconds;
			selectionSortTimes->Add(timeTaken);
			listBoxSelectionSortTime->Items->Add(timeTaken.ToString("F6") + " sec");
		}
	}


	// Helper function to perform the Selection Sort
	void SelectionSort(System::Collections::Generic::List<int>^ list) {
		for (int i = 0; i < list->Count - 1; i++) {
			int minIndex = i;
			for (int j = i + 1; j < list->Count; j++) {
				if (list[j] < list[minIndex]) {
					minIndex = j;
				}
			}
			// Swap if minIndex has changed
			if (minIndex != i) {
				int temp = list[minIndex];
				list[minIndex] = list[i];
				list[i] = temp;
			}
		}
	}

	public: System::Collections::Generic::List<double>^ bubbleSortTimes =
		gcnew System::Collections::Generic::List<double>();

	// Event handler for performing and timing Bubble Sort, with separate sorted array
	private: System::Void buttonBubbleSort_Click(System::Object^ sender, System::EventArgs^ e) {
		// Prepare for new sorting operation
		sortedNumbers2D->Clear();
		bubbleSortTimes->Clear();
		listBoxBubbleSortTime->Items->Clear();

		for (int i = 0; i < numbers2D->Count; i++) {
			// Copy the current list to be sorted
			auto listCopy = gcnew System::Collections::Generic::List<int>(numbers2D[i]);
			sortedNumbers2D->Add(listCopy); // Add the copy to the separate array

			//skip if sorted
			if (IsSortedCorrectly(listCopy)) {
				listBoxBubbleSortTime->Items->Add("Sorted");
				continue;
			}

			// Start timing the sort operation
			auto startTime = System::Diagnostics::Stopwatch::StartNew();
			BubbleSort(listCopy); // Sort the copied list
			startTime->Stop();

			// Calculate and record the time taken
			double timeTaken = startTime->Elapsed.TotalSeconds;
			bubbleSortTimes->Add(timeTaken);
			listBoxBubbleSortTime->Items->Add(timeTaken.ToString("F6") + " sec");
		}
	}

	// Helper function to perform the Bubble Sort
	void BubbleSort(System::Collections::Generic::List<int>^ list) {
		bool swapped;
		do {
			swapped = false;
			for (int i = 0; i < list->Count - 1; i++) {
				if (list[i] > list[i + 1]) {
					// Swap the elements
					int temp = list[i];
					list[i] = list[i + 1];
					list[i + 1] = temp;
					swapped = true;
				}
			}
		} while (swapped);
	}

	public: System::Collections::Generic::List<double>^ quickSortTimes =
		gcnew System::Collections::Generic::List<double>();

	// Event handler for performing and timing QuickSort, with separate sorted array and time storage
	private: System::Void buttonQuickSort_Click(System::Object^ sender, System::EventArgs^ e) {
		sortedNumbers2D->Clear();
		quickSortTimes->Clear(); // Clear previous times
		listBoxQuickSortTime->Items->Clear();

		for (int i = 0; i < numbers2D->Count; i++) {
			auto listCopy = gcnew System::Collections::Generic::List<int>(numbers2D[i]);
			sortedNumbers2D->Add(listCopy); // Prepare for new sorting operation

			//skip if sorted
			if (IsSortedCorrectly(listCopy)) {
				listBoxQuickSortTime->Items->Add("Sorted");
				continue;
			}

			auto startTime = System::Diagnostics::Stopwatch::StartNew();
			QuickSort(listCopy, 0, listCopy->Count - 1); // Sort the copied list
			startTime->Stop();

			double timeTaken = startTime->Elapsed.TotalSeconds;
			quickSortTimes->Add(timeTaken); // Store the timing
			listBoxQuickSortTime->Items->Add(timeTaken.ToString("F6") + " sec");
		}
	}

	// QuickSort Helper Function
	void QuickSort(System::Collections::Generic::List<int>^ list, int left, int right) {
		int i = left, j = right;
		int pivot = list[(left + right) / 2];

		while (i <= j) {
			while (list[i] < pivot)
				i++;
			while (list[j] > pivot)
				j--;
			if (i <= j) {
				// Swap
				int temp = list[i];
				list[i] = list[j];
				list[j] = temp;

				i++;
				j--;
			}
		}

		// Recursive calls
		if (left < j)
			QuickSort(list, left, j);
		if (i < right)
			QuickSort(list, i, right);
	}

	private: System::Void buttonLoadChart_Click(System::Object^ sender, System::EventArgs^ e) {
		// Clear the previous chart
		chartResult->Series->Clear();

		// Determine the chart type based on the checkBoxSpline
		System::Windows::Forms::DataVisualization::Charting::SeriesChartType chartType;
		if (checkBoxSpline->Checked) {
			chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
		}
		else {
			chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		}

		// Add two new series for the selection sort and bubble sort
		System::Windows::Forms::DataVisualization::Charting::Series^ seriesSelectionSort =
			(gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		seriesSelectionSort->Name = "SelectionSort";
		seriesSelectionSort->ChartType = chartType;

		System::Windows::Forms::DataVisualization::Charting::Series^ seriesBubbleSort =
			(gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		seriesBubbleSort->Name = "BubbleSort";
		seriesBubbleSort->ChartType = chartType;

		// QuickSort
		System::Windows::Forms::DataVisualization::Charting::Series^ seriesQuickSort =
			(gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		seriesQuickSort->Name = "QuickSort";
		seriesQuickSort->ChartType = chartType;

		// Add the series to the chart
		chartResult->Series->Add(seriesSelectionSort);
		chartResult->Series->Add(seriesBubbleSort);
		chartResult->Series->Add(seriesQuickSort);

		int step = Int32::Parse(textBoxStep->Text);
		// Loop through the recorded times and add them to the chart
		for (int i = 0; i < selectionSortTimes->Count; i++) {
			int dataSize = (i + 1) * step; // Assuming 'step' is defined and set elsewhere
			seriesSelectionSort->Points->AddXY(dataSize, selectionSortTimes[i]);
			seriesBubbleSort->Points->AddXY(dataSize, bubbleSortTimes[i]);
			seriesQuickSort->Points->AddXY(dataSize, quickSortTimes[i]);
		}

		// Set the chart area and title
		chartResult->ChartAreas[0]->AxisX->Title = "Data Size";
		chartResult->ChartAreas[0]->AxisY->Title = "Time (seconds)";
		chartResult->ChartAreas[0]->RecalculateAxesScale();
	}

	private: System::Void buttonReRun_Click(System::Object^ sender, System::EventArgs^ e) {
		// Reset success flag
		dataGenerationSuccess = false;

		// Invoke the Data Generation button click event handler
		buttonDataGeneration_Click(sender, e);

		// Check if data generation was successful before proceeding
		if (!dataGenerationSuccess) {
			return; // Exit early if data generation failed
		}

		// If data generation was successful, proceed with sorting and chart loading
		buttonSelectionSort_Click(sender, e);
		buttonBubbleSort_Click(sender, e);
		buttonQuickSort_Click(sender, e);
		buttonLoadChart_Click(sender, e);
	}

	// BinarySearch Helper Function
	private: int BinarySearch(System::Collections::Generic::List<int>^ list, int target) {
		int left = 0;
		int right = list->Count - 1;

		while (left <= right) {
			int mid = left + (right - left) / 2;

			if (list[mid] == target) {
				return mid; // Target found
			}
			else if (list[mid] < target) {
				left = mid + 1; // Search in the right half
			}
			else {
				right = mid - 1; // Search in the left half
			}
		}

		return -1; // Target not found
	}

	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		listBoxNumberData->Items->Clear();
		listBoxSelectionSortTime->Items->Clear();
		listBoxBubbleSortTime->Items->Clear();
		listBoxQuickSortTime->Items->Clear();
		listBoxSearchResult->Items->Clear();
		chartResult->Series["SelectionSort"]->Points->Clear();
		chartResult->Series["BubbleSort"]->Points->Clear();
		chartResult->Series["QuickSort"]->Points->Clear();
	}
	private: System::Void buttonBinarySearch_Click(System::Object^ sender, System::EventArgs^ e) {
		listBoxSearchResult->Items->Clear(); // Clear previous search results

		// Parse the target value from textBoxTarget
		int target;
		if (!Int32::TryParse(textBoxTarget->Text, target)) {
			MessageBox::Show("Please enter a valid numeric value for the target.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Iterate through each sorted list and perform binary search
		for (int i = 0; i < sortedNumbers2D->Count; i++) {
			int index = BinarySearch(sortedNumbers2D[i], target);

			if (index != -1) {
				// If target is found, display the occurrence
				listBoxSearchResult->Items->Add("Found at index " + index);
			}
			else {
				// If target is not found, indicate it
				listBoxSearchResult->Items->Add("Not found");
			}
		}
	}

};
}
