//
// Created by Meldred Emilio on 11/22/20.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("Shrubbery Creation", 145, 137), _target(target) {
	this->_trees[0] = "             _{\\ _{\\{\\/}/}/}__\n"
					  "            {/{/\\}{/{/\\}(\\}{/\\} _\n"
					  "           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
					  "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
					  "       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
					  "      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
					  "     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
					  "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
					  "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
					  "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
					  "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
					  "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
					  "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
					  "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
					  "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
					  "           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
					  "            {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
					  "             {){/ {\\/}{\\/} \\}\\}\n"
					  "             (_)  \\.-'.-/\n"
					  "         __...--- |'-.-'| --...__\n"
					  "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
					  "-\"    ' .  . '    |.'-._| '  . .  '   \n"
					  ".  '-  '    .--'  | '-.'|    .  '  . '\n"
					  "         ' ..     |'-_.-|\n"
					  " .  '  .       _.-|-._ -|-._  .  '  .\n"
					  "             .'   |'- .-|   '.\n"
					  " ..-'   ' .  '.   `-._.-´   .'  '  - .\n"
					  "  .-' '        '-._______.-'     '  .";
	this->_trees[1] = "             /\\\n"
					  "            <  >\n"
					  "             \\/\n"
					  "             /\\\n"
					  "            /  \\\n"
					  "           /++++\\\n"
					  "          /  ()  \\\n"
					  "          /      \\\n"
					  "         /~`~`~`~`\\\n"
					  "        /  ()  ()  \\\n"
					  "        /          \\\n"
					  "       /*&*&*&*&*&*&\\\n"
					  "      /  ()  ()  ()  \\\n"
					  "      /              \\\n"
					  "     /++++++++++++++++\\\n"
					  "    /  ()  ()  ()  ()  \\\n"
					  "    /                  \\\n"
					  "   /~`~`~`~`~`~`~`~`~`~`\\\n"
					  "  /  ()  ()  ()  ()  ()  \\\n"
					  "  /*&*&*&*&*&*&*&*&*&*&*&\\\n"
					  " /                        \\\n"
					  "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n"
					  "           |   |\n"
					  "          |`````|\n"
					  "          \\_____/";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
	Form(other), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&          ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	(void)other;
	return *this;
}

const char * ShrubberyCreationForm::FileOpenFailException::what() const throw() {
	return "ShrubberyCreationForm: File opening failed";
}

const char * ShrubberyCreationForm::WriteFailException::what() const throw() {
	return "ShrubberyCreationForm: Writing to file failed";
}

void                            ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::string filename = this->_target + "_shrubbery";
	std::ofstream out(filename);
	if (!out.is_open() || out.bad())
		throw ShrubberyCreationForm::FileOpenFailException();
	for (int i = 0; i < 10; i++) {
		out << ShrubberyCreationForm::_trees[i % 2] << std::endl;
		if (out.bad()) {
			out.close();
			throw ShrubberyCreationForm::WriteFailException();
		}
	}
	out << std::endl;
	out.close();
}
