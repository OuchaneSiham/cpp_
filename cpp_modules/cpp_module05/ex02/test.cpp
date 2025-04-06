#include "AForm.hpp"

AForm::AForm(void): _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "default constructor of AForm is called" << std::endl;
}

AForm::AForm(const AForm &source)
    : _name(source._name), _isSigned(source._isSigned), 
      _gradeToSign(source._gradeToSign), _gradeToExecute(source._gradeToExecute)
{
    std::cout << "copy constructor of AForm is called" << std::endl;
}

AForm::AForm(const std::string &name, const int &gradeToSign, const int &gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1) throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
}

AForm::~AForm()
{
    std::cout << "AForm class has been destroyed" << std::endl;
}

AForm &AForm::operator=(const AForm &source)
{
    if (this != &source) 
    {
        _isSigned = source._isSigned;  // We don't need to copy the name and grades as they are constants.
    }
    return *this;
}

const std::string &AForm::getName() const
{
    return _name;
}

bool AForm::isSigned() const
{
    return _isSigned;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

char const *AForm::GradeTooHighException::what() const throw()
{
    return "AForm: Grade is too high!";
}

char const *AForm::GradeTooLowException::what() const throw()
{
    return "AForm: Grade is too low!";
}

std::ostream &operator<<(std::ostream &out, const AForm &aform)
{
    return out << "AForm " << aform.getName() << " requires grade " << aform.getGradeToSign()
               << " to sign and grade " << aform.getGradeToExecute() << " to execute. "
               << "Currently, it is " << (aform.isSigned() ? "signed." : "not signed.");
}

void AForm::beSigned(const Bureaucrat &signer)
{
    if (signer.getGrade() <= _gradeToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}
