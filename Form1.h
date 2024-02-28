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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartResult))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBoxNumber->Location = System::Drawing::Point(58, 16);
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
			this->textBoxRepetition->Location = System::Drawing::Point(284, 16);
			this->textBoxRepetition->Name = L"textBoxRepetition";
			this->textBoxRepetition->Size = System::Drawing::Size(100, 26);
			this->textBoxRepetition->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(170, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"repeatition =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(398, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"step =";
			// 
			// textBoxStep
			// 
			this->textBoxStep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBoxStep->Location = System::Drawing::Point(460, 16);
			this->textBoxStep->Name = L"textBoxStep";
			this->textBoxStep->Size = System::Drawing::Size(100, 26);
			this->textBoxStep->TabIndex = 5;
			// 
			// buttonDataGeneration
			// 
			this->buttonDataGeneration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonDataGeneration->Location = System::Drawing::Point(22, 57);
			this->buttonDataGeneration->Name = L"buttonDataGeneration";
			this->buttonDataGeneration->Size = System::Drawing::Size(150, 30);
			this->buttonDataGeneration->TabIndex = 6;
			this->buttonDataGeneration->Text = L"Data Generation";
			this->buttonDataGeneration->UseVisualStyleBackColor = true;
			this->buttonDataGeneration->Click += gcnew System::EventHandler(this, &Form1::buttonDataGeneration_Click);
			// 
			// buttonSelectionSort
			// 
			this->buttonSelectionSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonSelectionSort->Location = System::Drawing::Point(176, 57);
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
			this->buttonBubbleSort->Location = System::Drawing::Point(305, 57);
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
			this->label4->Location = System::Drawing::Point(23, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"# of data";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(176, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"(sec.)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(303, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"(sec.)";
			// 
			// buttonReRun
			// 
			this->buttonReRun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonReRun->Location = System::Drawing::Point(23, 239);
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
			this->buttonLoadChart->Location = System::Drawing::Point(354, 239);
			this->buttonLoadChart->Name = L"buttonLoadChart";
			this->buttonLoadChart->Size = System::Drawing::Size(100, 30);
			this->buttonLoadChart->TabIndex = 16;
			this->buttonLoadChart->Text = L"Load Chart";
			this->buttonLoadChart->UseVisualStyleBackColor = true;
			this->buttonLoadChart->Click += gcnew System::EventHandler(this, &Form1::buttonLoadChart_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonClear->Location = System::Drawing::Point(461, 239);
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
			this->checkBoxSpline->Location = System::Drawing::Point(263, 242);
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
			this->chartResult->Location = System::Drawing::Point(23, 284);
			this->chartResult->Name = L"chartResult";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartResult->Series->Add(series1);
			this->chartResult->Size = System::Drawing::Size(537, 300);
			this->chartResult->TabIndex = 19;
			this->chartResult->Text = L"chart1";
			// 
			// listBoxNumberData
			// 
			this->listBoxNumberData->FormattingEnabled = true;
			this->listBoxNumberData->ItemHeight = 16;
			this->listBoxNumberData->Location = System::Drawing::Point(23, 121);
			this->listBoxNumberData->Name = L"listBoxNumberData";
			this->listBoxNumberData->Size = System::Drawing::Size(149, 100);
			this->listBoxNumberData->TabIndex = 20;
			// 
			// listBoxSelectionSortTime
			// 
			this->listBoxSelectionSortTime->FormattingEnabled = true;
			this->listBoxSelectionSortTime->ItemHeight = 16;
			this->listBoxSelectionSortTime->Location = System::Drawing::Point(176, 121);
			this->listBoxSelectionSortTime->Name = L"listBoxSelectionSortTime";
			this->listBoxSelectionSortTime->Size = System::Drawing::Size(125, 100);
			this->listBoxSelectionSortTime->TabIndex = 21;
			// 
			// buttonQuickSort
			// 
			this->buttonQuickSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonQuickSort->Location = System::Drawing::Point(434, 57);
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
			this->listBoxBubbleSortTime->Location = System::Drawing::Point(305, 121);
			this->listBoxBubbleSortTime->Name = L"listBoxBubbleSortTime";
			this->listBoxBubbleSortTime->Size = System::Drawing::Size(125, 100);
			this->listBoxBubbleSortTime->TabIndex = 22;
			// 
			// listBoxQuickSortTime
			// 
			this->listBoxQuickSortTime->FormattingEnabled = true;
			this->listBoxQuickSortTime->ItemHeight = 16;
			this->listBoxQuickSortTime->Location = System::Drawing::Point(434, 121);
			this->listBoxQuickSortTime->Name = L"listBoxQuickSortTime";
			this->listBoxQuickSortTime->Size = System::Drawing::Size(125, 100);
			this->listBoxQuickSortTime->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(430, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"(sec.)";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 603);
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
	
	// Event handler for generating random numbers based on user inputs
	private: System::Void buttonDataGeneration_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Clear existing data
			numbers2D->Clear();
			listBoxNumberData->Items->Clear();

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

			// Generate random data in repetitions
			Random^ rnd = gcnew Random();
			for (int i = 0; i < repetitions; i++) {
				int n = baseNumber + (i * step); // Calculate the size for this round
				System::Collections::Generic::List<int>^ numbers =
					gcnew System::Collections::Generic::List<int>(); // Create a new list for this round

				// Populate the list with random numbers
				for (int j = 0; j < n; j++) {
					numbers->Add(rnd->Next(n)); // Numbers are from 0 to n - 1
				}

				// Add the list to the 2D List and update the listBoxNumberData
				numbers2D->Add(numbers);
				listBoxNumberData->Items->Add(n);
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

	public: System::Collections::Generic::List<double>^ selectionSortTimes =
		gcnew System::Collections::Generic::List<double>();

	public: System::Collections::Generic::List<System::Collections::Generic::List<int>^>^ selectionSortedNumbers2D =
		gcnew System::Collections::Generic::List<System::Collections::Generic::List<int>^>();

	// Event handler for performing and timing Selection Sort, with separate sorted array
	private: System::Void buttonSelectionSort_Click(System::Object^ sender, System::EventArgs^ e) {
		// Prepare for new sorting operation
		selectionSortedNumbers2D->Clear();
		selectionSortTimes->Clear();
		listBoxSelectionSortTime->Items->Clear();

		for (int i = 0; i < numbers2D->Count; i++) {
			// Copy the current list to be sorted
			auto listCopy = gcnew System::Collections::Generic::List<int>(numbers2D[i]);
			selectionSortedNumbers2D->Add(listCopy); // Add the copy to the separate array

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

	public: System::Collections::Generic::List<System::Collections::Generic::List<int>^>^ bubbleSortedNumbers2D =
		gcnew System::Collections::Generic::List<System::Collections::Generic::List<int>^>();

	// Event handler for performing and timing Bubble Sort, with separate sorted array
	private: System::Void buttonBubbleSort_Click(System::Object^ sender, System::EventArgs^ e) {
		// Prepare for new sorting operation
		bubbleSortedNumbers2D->Clear();
		bubbleSortTimes->Clear();
		listBoxBubbleSortTime->Items->Clear();

		for (int i = 0; i < numbers2D->Count; i++) {
			// Copy the current list to be sorted
			auto listCopy = gcnew System::Collections::Generic::List<int>(numbers2D[i]);
			bubbleSortedNumbers2D->Add(listCopy); // Add the copy to the separate array

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

	public: System::Collections::Generic::List<System::Collections::Generic::List<int>^>^ quickSortedNumbers2D =
		gcnew System::Collections::Generic::List<System::Collections::Generic::List<int>^>();

	// Event handler for performing and timing QuickSort, with separate sorted array and time storage
	private: System::Void buttonQuickSort_Click(System::Object^ sender, System::EventArgs^ e) {
		quickSortedNumbers2D->Clear();
		quickSortTimes->Clear(); // Clear previous times
		listBoxQuickSortTime->Items->Clear();

		for (int i = 0; i < numbers2D->Count; i++) {
			auto listCopy = gcnew System::Collections::Generic::List<int>(numbers2D[i]);
			quickSortedNumbers2D->Add(listCopy); // Prepare for new sorting operation

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

	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		listBoxNumberData->Items->Clear();
		listBoxSelectionSortTime->Items->Clear();
		listBoxBubbleSortTime->Items->Clear();
		listBoxQuickSortTime->Items->Clear();
		chartResult->Series["SelectionSort"]->Points->Clear();
		chartResult->Series["BubbleSort"]->Points->Clear();
		chartResult->Series["QuickSort"]->Points->Clear();
	}
};
}
