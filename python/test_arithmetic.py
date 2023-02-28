import unittest

from python.arithmetic import Arithmetic

class TestArithmetic(unittest.TestCase): 
    def testAddition(self):
        assert(8 == Arithmetic.addition(5, 3))
    
    def testSubstraction(self):
        assert(2 == Arithmetic.subtraction(5, 3))
    
    def testMultiplication(self):
        assert(15 == Arithmetic.multiplication(5, 3))
    
    def testDivision(self):
        assert(1.6666666666666667 == Arithmetic.division(5, 3))
