import threeSumClosest
import unittest


class ThreeSumClosestCase(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_twoSum_convert(self):
        s = threeSumClosest.Solution()
        for nums, target, sol in [  
            ([-1,2,1,-4], 1, 2), 
            ([0,2,1,-3], 1, 0),
            ([4,-8,98,-51,73,12,-31,39,87,-16,20,69,18,59,54,44,-58,40,
                -36,22,-60,-8,-43,83,88,1,-25,71,-53,33,60,32,61,-5,28, 
                38,-28,45,25,-68,-60,-87,5,-94,-19,-31,-35,-29,0,24,-62,
                -84,-7,-94,-89,12,97,-32,-89,92,-50,-54,-18,12,84,-81,-99,67,24,
                -4,-88,61,48,-17,-17,-44,65,-18,-47,68,0,-7,78,36,0,-15,23,-4,1,
                -74,-64,-53,-82,-10,34,-57,-93,65,-3,-73,-8,-59,96,35,51,49,92,
                -8,-4,-100,-64,5,-86,-26,71,60,-85,-42,-13,-10,17,-11,59,-14,-5,
                34,-36,24,9,78,48,24,-88,-46,-76,31,-47,-68,29,34,-97,-69,-41,-87,
                -42,96,0,-90,51,-55,57,86,-61,41,1,-90,-9,63,84,-32,80,-15,-12,0,
                72,-22,-6,-64,94,23,-80,-25,-37,-38,69,12,-64,-95,-65,5,15,-31,
                -68,-55,-100,-89,-24,-66,33,-14,-40,-50,-19,-79,-4], -76, -76)
            ]:
            self.assertEqual(s.threeSumClosest(nums, target), sol)

