cmake_minimum_required(VERSION 3.16.3)

project(TrickyQuestions
	VERSION 1.0.0
	LANGUAGES CXX)

add_executable("Question${Question}"
	"Question${Question}.cpp"
)


