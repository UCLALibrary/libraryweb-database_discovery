<?php
/**
 * @file
 * database_discovery.features.inc
 */

/**
 * Implements hook_node_info().
 */
function database_discovery_node_info() {
  $items = array(
    'database_discovery' => array(
      'name' => t('Database discovery'),
      'base' => 'node_content',
      'description' => t('Metadata for discovery of databases.'),
      'has_title' => '1',
      'title_label' => t('Content Description'),
      'help' => '',
    ),
  );
  return $items;
}
