#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructor
Form::Form(void) : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const Form &source)
    : _name(source._name), _isSigned(source._isSigned), _gradeToSign(source._gradeToSign), _gradeToExecute(source._gradeToExecute) {}

Form::Form(const std::string &name, const int &gradeToSign, const int &gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

// Destructor
Form::~Form() {}

// Assignment operator
Form &Form::operator=(const Form &source)
{
    if (this != &source)
    {
        _isSigned = source._isSigned; // Only _isSigned can be modified
    }
    return *this;
}

// Getters
const std::string &Form::getName(void) const { return _name; }
bool &Form::isSigned(void) const { return const_cast<bool &>(_isSigned); }
const int &Form::getGradeToSign() const { return _gradeToSign; }
const int &Form::getGradeToExecute() const { return _gradeToExecute; }

// beSigned method
void Form::beSigned(const Bureaucrat &signer)
{
    if (signer.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

// Exception messages
char const *Form::GradeTooHighException::what() const throw()
{
    return "Form: Grade is too high!";
}

char const *Form::GradeTooLowException::what() const throw()
{
    return "Form: Grade is too low!";
}

// Overload of insertion operator
std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form " << form.getName() << " requires grade " << form.getGradeToSign()
        << " to sign and grade " << form.getGradeToExecute() << " to execute. "
        << "Currently, it is " << (form.isSigned() ? "signed." : "not signed.");
    return out;
}