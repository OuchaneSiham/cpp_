#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include <string>

int main()
{
    // Test from subject
    std::cout << "=== Test from Subject ===" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    // Additional tests
    std::cout << "\n=== Additional Tests ===" << std::endl;
    
    // Test MateriaSource functionality
    std::cout << "\n--- MateriaSource Tests ---" << std::endl;
    MateriaSource* source = new MateriaSource();
    source->learnMateria(new Ice());
    source->learnMateria(new Cure());
    source->learnMateria(new Ice());
    source->learnMateria(new Cure());
    
    // Try to learn a 5th materia (should not work)
    source->learnMateria(new Ice());
    
    // Create materias
    AMateria* m1 = source->createMateria("ice");
    AMateria* m2 = source->createMateria("cure");
    AMateria* m3 = source->createMateria("unknown"); // Should return NULL
    
    std::cout << "Created materia of type: " << m1->getType() << std::endl;
    std::cout << "Created materia of type: " << m2->getType() << std::endl;
    std::cout << "Trying to create unknown materia: " << (m3 == NULL ? "NULL (correct)" : "Not NULL (error)") << std::endl;
    
    // Test Character functionality
    std::cout << "\n--- Character Tests ---" << std::endl;
    Character* alice = new Character("Alice");
    
    // Equip materias
    alice->equip(m1);
    alice->equip(m2);
    
    // Test use
    Character* charlie = new Character("Charlie");
    alice->use(0, *charlie);
    alice->use(1, *charlie);
    alice->use(2, *charlie); // Should do nothing (empty slot)
    alice->use(5, *charlie); // Should do nothing (invalid index)
    
    // Test unequip
    std::cout << "Unequipping slot 0" << std::endl;
    AMateria* unequipped = m1;
    alice->unequip(0);
    alice->use(0, *charlie); // Should do nothing (unequipped)
    
    // Test copy constructor
    std::cout << "\n--- Copy Tests ---" << std::endl;
    Character* aliceCopy = new Character(*alice);
    std::cout << "Original: " << alice->getName() << std::endl;
    std::cout << "Copy: " << aliceCopy->getName() << std::endl;
    
    aliceCopy->use(1, *charlie); // Should use Cure (copied from alice)
    
    // Test assignment operator
    Character david("David");
    david = *alice;
    std::cout << "After assignment: " << david.getName() << std::endl;
    david.use(1, *charlie); // Should use Cure (copied from alice)
    
    // Clean up
    delete unequipped; // Need to delete manually after unequip
    delete aliceCopy;
    delete charlie;
    delete alice;
    delete source;
    
    return 0;
}