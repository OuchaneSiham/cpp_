/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:06:28 by souchane          #+#    #+#             */
/*   Updated: 2025/03/06 20:05:57 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fp_value(0) 
{
//    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input) 
{
    // std::cout << "Int constructor called" << std::endl;
    _fp_value = input << _fract_bits;
}

Fixed::Fixed(const float input) 
{
    // std::cout << "Float constructor called" << std::endl;
    _fp_value = roundf(input * (1 << _fract_bits));
}

Fixed::Fixed(const Fixed& copy) 
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src) 
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        _fp_value = src._fp_value;
    return *this;
}
bool Fixed::operator>(const Fixed& other) const { return _fp_value > other._fp_value; }
bool Fixed::operator<(const Fixed& other) const { return _fp_value < other._fp_value; }
bool Fixed::operator>=(const Fixed& other) const { return _fp_value >= other._fp_value; }
bool Fixed::operator<=(const Fixed& other) const { return _fp_value <= other._fp_value; }
bool Fixed::operator==(const Fixed& other) const { return _fp_value == other._fp_value; }
bool Fixed::operator!=(const Fixed& other) const { return _fp_value != other._fp_value; }

Fixed Fixed::operator+(const Fixed& other) const 
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const 
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const 
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const 
{
    if (other._fp_value == 0) 
    {
        std::cerr << "Error: Division by zero!" << std::endl;
        return Fixed();
    }
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() 
{ 
    _fp_value++;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed temp(*this);
    _fp_value++;
    return temp;
}

Fixed& Fixed::operator--()
{ 
    _fp_value--;
    return *this;
}

Fixed Fixed::operator--(int) 
{ 
    Fixed temp(*this);
    _fp_value--;
    return temp;
}

float Fixed::toFloat(void) const 
{
    return static_cast<float>(_fp_value) / (1 << _fract_bits);
}

int Fixed::toInt(void) const 
{
    return _fp_value >> _fract_bits;
}

int Fixed::getRawBits(void) const 
{
    return _fp_value;
}

void Fixed::setRawBits(int const raw) 
{
    _fp_value = raw;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) 
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) 
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) 
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) 
{
    return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) 
{
    out << fixed.toFloat();
    return out;
}
