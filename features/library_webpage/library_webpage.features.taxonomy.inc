<?php
/**
 * @file
 * library_webpage.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function library_webpage_taxonomy_default_vocabularies() {
  return array(
    'glossary' => array(
      'name' => 'Glossary',
      'machine_name' => 'glossary',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tag' => array(
      'name' => 'Tag',
      'machine_name' => 'tag',
      'description' => 'Loose subject classification ',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
