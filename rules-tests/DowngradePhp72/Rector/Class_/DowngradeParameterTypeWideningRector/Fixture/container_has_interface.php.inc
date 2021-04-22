<?php

namespace Rector\Tests\DowngradePhp72\Rector\Class_\DowngradeParameterTypeWideningRector\Fixture;

interface SomeContainerInterface
{
    public function has(string $id);
}

class SomeContainer implements SomeContainerInterface
{
    public function has($id)
    {
    }
}

final class SomeContainerBuilder extends SomeContainer
{
    public function has($id)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\DowngradePhp72\Rector\Class_\DowngradeParameterTypeWideningRector\Fixture;

interface SomeContainerInterface
{
    /**
     * @param string $id
     */
    public function has($id);
}

class SomeContainer implements SomeContainerInterface
{
    public function has($id)
    {
    }
}

final class SomeContainerBuilder extends SomeContainer
{
    public function has($id)
    {
    }
}

?>